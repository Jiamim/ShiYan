���ʿ����б�ACL����ʵ��
===========
##����ͼ
![](../images/ACL.gif)
##��������
�ʵ�黷������ʹ���������Σ�192.168.8.0 /192.168.9.0 /192.168.10.0�� �������ܹ�������ͨ
```
·����A
>ena
#conf t
(config)int s2/0
(config-if)ip address 10.1.1.1 255.255.255.0
(config-if)no shutdown
(config-if)int f0/0
(config-if)ip address 192.168.8.1 255.255.255.0
(config-if)no shutdown
(config-if)router rip
(config-if)version 2
(config-if)net 10.1.1.0
(config-if)net 192.168.8.0
(config-if)end
�л���·����B
>ena
#conf t
(config)int s0/2/0
(config-if)ip address 10.1.1.2 255.255.255.0
(config-if)no shutdown
(config-if)int f0/0
(config-if)ip address 192.168.9.1 255.255.255.0
(config-if)no shutdown
(config-if)int f0/1
(config-if)ip address 192.168.10.1 255.255.255.0
(config-if)no shutdown
(config-if)router rip
(config-if)version 2
(config-if)net 10.1.1.0
(config-if)net 192.168.9.0
(config-if)net 192.168.10.0
(config-if)end
���ñ�׼���ʿ����б�
A(config-if)Access-list 15 deny 192.168.9.0 0.0.0.255
A(config-if)Access-list 15 permit any
A(config-if)interface s2/0
A(config-if)ip access-group 15 in

������չ���ʿ����б�
(config)no access-list 15 ȡ����׼�����б�15
(config)end

(config)#ip access-list extended 105
(config-ext-nacl)#deny ip 192.168.9.0 0.0.0.255 host 192.168.8.2  
(config-ext-nacl)#permit ip any any
(config-ext-nacl)#int s2/0
(config-if)#ip access-group 105 in
(config-if)#end
```