�����������VLAN���ۺ�ʵ��
=============
##����ͼ
![](../images/vlan.gif)
##��������
```
�� ����trunk��
��¼��������3560
S3560-08(config)# interface fa0/2
S3560-08(config-if)# switchport trunk encapsulation dot1q
S3560-08(config-if)# switchport mode trunk

��¼��������2950
S2950-08(config)# interface fa0/6
S2950-08(config-if)# switchport mode trunk
ע�⣺Cisco 2950��֧��switchport trunk encapsulation dot1q ���dot1q Ϊ2950 ��Ĭ��trunk��װ��

�� ��3560��2950������VTP ����
��3560 ����ΪVTP server����2950����ΪVTPclient��
��¼��������3560
S3560-08# vlan database
S3560-08(vlan)# vtp domain ncdx
S3560-08(vlan)# vtp password cisco
S3560-08(vlan)# vtp server
S3560-08(vlan)# exit

��¼��������2950
S2950-08# vlan database
S2950-08(vlan)# vtp domain ncdx
S2950-08(vlan)# vtp password cisco
S2950-08(vlan)# vtp client
S2950-08(vlan)# exit

�� ��Server������3560�ϴ���VLAN��
��¼��������3560
S3560-08# vlan database
S3560-08(vlan)# vlan 2 name W1
S3560-08(vlan)# vlan 3 name W2
S3560-08(vlan)# exit

��  ��3560��fa0/7�� 2950��fa0/7����VLAN 2
��3560��fa0/8�� 2950��fa0/8����VLAN 3��
��¼��������3560
S3560-08(config)# interface fa0/7
S3560-08(config-if)# switchport mode access
S3560-08(config-if)# switchport access vlan 2
S3560-08(config-if)# exit
S3560-08(config)# interface fa0/8
S3560-08(config-if)# switchport mode access
S3560-08(config-if)# switchport access vlan 3
S3560-08 config-if)# exit

��¼��������2950
S2950-08(config)# interface fa0/7
S2950-08(config-if)# switchport mode access
S2950-08(config-if)# switchport access vlan 2
S2950-08(config-if)# exit 
S2950-08(config)# interface fa0/8
S2950-08(config-if)# switchport mode access
S2950-08(config-if)# switchport access vlan 3
S2950-08(config-if)# exit

```