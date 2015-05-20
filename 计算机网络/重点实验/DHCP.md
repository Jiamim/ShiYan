·�����ͽ�����������DHCP
==============
##����ͼ
![](../images/WAN-DHCP.gif)
##��������
```
·����A����
en
config t
int f0/0
ip address 192.168.10.1 255.255.255.0
no shut
int s2/0
ip address 12.1.1.1 255.255.255.0
clock rate 64000
no shut
exit
ip route 192.168.11.0 255.255.255.0 255.255.255.0 12.1.1.2

·����B������
en
config t
int f0/0
ip address 192.168.11.1 255.255.255.0
no shut
int s2/0
ip address 12.1.1.2 255.255.255.0
no shut
exit
ip route 192.168.10.0 255.255.255.0 12.1.1.1 

·����A����
ip dhcp pool zhulou  //������¥DHCP��ַ��
network 192.168.10.0 255.255.255.0  //��̬����192.168.10.0/24��������ڵ�IP��ַ
dns-server 218.2.135.1   //Ϊ��¥���������DNS������
default-router 192.168.10.1   //Ϊ��¥�Ŀͻ�����������
ip dhcp pool fulou   //���ø�¥DHCP��ַ��
network 192.168.11.0 255.255.255.0    //��̬����192.168.11.0/24��������ڵ�IP��ַ
dns-server 218.2.135.1    //Ϊ��¥���������DNS������
default-router 192.168.11.1   //Ϊ��¥�Ŀͻ�����������
exit
ip dhcp excluded-address 192.168.10.1  //�ų���¥�ͻ���������
ip dhcp excluded-address 192.168.11.1   //�ų���¥�ͻ���������

·����B���ã�����DHCP�м̣�

int f0/0
ip helper-address 12.1.1.1  //���ø���Ѱַ��ָ��DHCP�������ĵ�ַ����·����R1��IP��ַ
```