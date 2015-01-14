�������ۺ�ʵ��
===========
##����ͼ
![](../images/WAN-DHCP.gif)
>�ҵ�·��������A��B������·������FastEthernet�˿ڵ�ip����������192.168.8.1��192.168.9.1

##��������
###��������
```
A��en
A#conf  t
A(config)int s2/0
A(config-if)ip address 10.1.1.1  255.255.255.0
A(config-if)no shutdown
A(config-if)int f0/0 
A(config-if)ip address 192.168.1.1  255.255.255.0
A(config-if)no shutdown
A(config-if)end

B��en
B#conf  t
B(config)int s2/0
B(config-if)ip address 10.1.1.2  255.255.255.0
B(config-if)no shutdown
B(config-if)int f0/0
B(config-if)ip address 192.168.2.1  255.255.255.0
B(config-if)no shutdown
B(config-if)end
��������������ʵ����ͬ��
```
###RIPЭ�����ù���
```
A#conf  t
A(config)router rip
A(config-router)version 2
A(config-router)network 10.1.1.0
A(config-router)network 192.168.8.0
A(config-router)end

B#conf  t
B(config)router rip
B(config-router)version 2
B(config-router)network 10.1.1.0
B(config-router)network 192.168.9.0
```
###OSPFЭ�����ù���
```
A#conf  t
A(config)router ospf 100
A(config-router)network 10.1.1.0  255.255.255.0 area 0
A(config-router)network 192.168.8.0  255.255.255.0 area 0
A(config-router)end


B#conf  t
B(config)router ospf 100
B(config-router)network 10.1.1.0  255.255.255.0  area 0
B(config-router)network 192.168.9.0  255.255.255.0  area 0
```
###EIGRPЭ�����ù���
```
A#conf  t
A(config)router eigrp  200
A(config-router)network 10.1.1.0
A(config-router)network 192.168.8.0
A(config-router)end

B#conf  t
B(config)router eigrp 200
B(config-router)network 10.1.1.0
B(config-router)network 192.168.9.0
```
