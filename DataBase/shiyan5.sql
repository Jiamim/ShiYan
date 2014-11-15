USE market 

go 

CREATE PROC proc_hub 
AS 
  BEGIN 
      SELECT orderid      '������', 
             customername '�ͻ�����', 
             quantity     '��������' 
      FROM   orders, 
             customer 
      WHERE  orders.customerid = customer.customerid 
             AND orderid IN (SELECT orderid 
                             FROM   orders 
                             WHERE  goodsid = (SELECT goodsid 
                                               FROM   goods 
                                               WHERE  goodsname = 'hub')); 
  END 

-- ִ�д洢����proc_hub 
EXEC proc_hub 

-- �����������Ĵ洢����proc_goods 
go 

CREATE PROC proc_goods @goodsname VARCHAR(20) 
AS 
  BEGIN 
      SELECT * 
      FROM   orders 
      WHERE  goodsid = (SELECT goodsid 
                        FROM   goods 
                        WHERE  goodsname = @goodsname); 
  END 

-- ִ��proc_goods 
EXEC proc_goods 'hub' 

-- ɾ���洢���� 
DROP PROC proc_hub 
DROP PROC proc_goods