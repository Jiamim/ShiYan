USE market
-- ��Ҫ��֤�ϲ��ļ����Ѿ�����
-- ȫ�ⱸ��
EXEC sp_addumpdevice 'disk','databackup','E:\wangwei\sql\market.bak' 
BACKUP DATABASE market TO databackup
-- ���챸�� 
EXEC sp_addumpdevice 'disk','diffbackup1','E:\wangwei\sql\market_diff1.bak'
EXEC sp_addumpdevice 'disk','diffbackup2','E:\wangwei\sql\market_diff2.bak'

BACKUP DATABASE market TO diffbackup1 WITH DIFFERENTIAL 
BACKUP DATABASE market TO diffbackup2 WITH DIFFERENTIAL 

-- ��־����(�������ݿ������--ѡ������Ļָ�ģʽΪ����������־��) 
EXEC sp_addumpdevice 'disk','logbackup1','E:\wangwei\sql\market_log1.bak'
EXEC sp_addumpdevice 'disk','logbackup2','E:\wangwei\sql\market_log2.bak'

BACKUP LOG market TO logbackup1 WITH NORECOVERY
BACKUP LOG market TO logbackup2 WITH NORECOVERY


-- �ָ�ȫ�ⱸ��
RESTORE DATABASE market FROM databackup WITH  NORECOVERY 

-- �ָ��ڶ��β��챸�� 
RESTORE DATABASE market FROM diffbackup2 WITH NORECOVERY 

-- �ָ���һ����־���� 
RESTORE DATABASE market FROM logbackup1 WITH NORECOVERY 

-- �ָ��ڶ�����־���� 
RESTORE DATABASE market FROM logbackup2 WITH NORECOVERY

-- �鿴�߼��豸�е��߼��ļ������﷨
 RESTORE FILELISTONLY from diffbackup1
 -- ɾ���߼��豸���﷨
EXEC sp_dropdevice 'databackup'
