USE market 

-- ����ordersumΪgoodsid��Ӧ��price*quantity�Ļ� 
UPDATE orders 
SET    ordersum = (SELECT price 
                   FROM   goods 
                   WHERE  goods.goodsid = orders.goodsid) * quantity 

-- (1) �� customer ���в�ѯ���пͻ��������͵绰
SELECT customername, 
       tel 
FROM   customer 

-- (2) ��ѯ��������� 1000 ����Ʒ�������������Ӵ�С����
SELECT * 
FROM   goods 
WHERE  storage > 1000 
ORDER  BY storage DESC 

-- (3) ��ѯÿ���ͻ��Ķ��������ܺ�
SELECT customername, 
       Sum(ordersum) AS sum 
FROM   orders, 
       customer 
WHERE  customer.customerid = orders.customerid 
GROUP  BY customer.customername 

-- (4) ��ѯ 2005 ���ϰ��꣨ 1 �� 1 �յ� 6 �� 30 �գ������������� 5000 ����Ʒ
SELECT goodsname, 
       Sum(tmp.ordersum) AS sumprice 
FROM   goods, 
       (SELECT * 
        FROM   orders 
        WHERE  orderdate BETWEEN '2005-01-01' AND '2005-06-30')AS tmp 
WHERE  goods.goodsid = tmp.goodsid 
GROUP  BY goodsname 
HAVING Sum(tmp.quantity) > 5000 

-- (5) ��ѯ���б����ͻ��Ķ�����Ϣ��������������š��ͻ�����������Ʒ��������
SELECT orderid, 
       customername, 
       goodsname, 
       quantity 
FROM   customer, 
       orders, 
       goods 
WHERE  customer.address = '����' 
       AND orders.customerid = customer.customerid 
       AND orders.goodsid = goods.goodsid 

-- (6) ��ѯ������Ʒ��ʲôʱ�������˶���
SELECT goodsname, 
       orderdate, 
       quantity 
FROM   goods, 
       orders 
WHERE  goods.goodsid = orders.goodsid 

-- (7) ��ѯû�ж�������Ʒ��Ϣ
SELECT * 
FROM   goods 
WHERE  goodsid NOT IN (SELECT goodsid 
                       FROM   orders 
                       GROUP  BY goodsid) 

-- (8) ��ѯÿ����Ʒ���������������ܽ��
SELECT goodsname, 
       Sum(quantity)AS ��������, 
       Sum(ordersum)AS �ܽ�� 
FROM   goods, 
       orders 
WHERE  goods.goodsid = orders.goodsid 
GROUP  BY goods.goodsname 
