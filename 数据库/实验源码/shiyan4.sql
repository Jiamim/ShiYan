-- ��1������һ�������������ͻ���Ϣ����ͼ customer_beijing�� 
CREATE VIEW customer_beijing AS 
SELECT * 
FROM   customer 
WHERE  address='����' WITH CHECK OPTION 
-- ��2��ͨ����ѯ customer_beijing ��ͼ��ñ����ͻ�����Ϣ 
SELECT * 
FROM   customer_beijing 
-- ��3���޸� customer_beijing ��ͼΪ�����������ͻ��������ȼ�Ϊ1����ͼALTER VIEW customer_beijing AS 
SELECT * 
FROM   customer 
WHERE  address='����' 
AND    creditgradeid=1 
-- ��4��ɾ�� customer_beijing ��ͼ
DROP VIEW customer_beijing 
-- ��5������һ����ͼ ordersum_goods�����е�������ÿ����Ʒ�����ƺ�ÿ����Ʒ�Ķ��������ܺ�
CREATE VIEW ordersum_sum AS 
SELECT   goodsname '��Ʒ����', 
         Sum(orders.ordersum) '�ܽ��' 
FROM     goods, 
         orders 
WHERE    goods.goodsid = orders.goodsid 
GROUP BY goodsname 
-- ��6��ͨ����ѯ ordersum_goods ��ͼ�����ÿ����Ʒ�����ƺ�ÿ����Ʒ�Ķ��������ܺ� 
SELECT * 
FROM   ordersum_sum