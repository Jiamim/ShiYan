USE market
INSERT INTO customer 
VALUES     (1, 
            '�ⴹ��', 
            'YoYo', 
            '1234', 
            '2014-10-16', 
            1, 
            'NanChang', 
            '330031', 
            123456, 
            'YoYo@gmail.com', 
            'student'); 

INSERT INTO customer 
VALUES     (2, 
            '���岩', 
            'Bob', 
            '1234', 
            '2014-10-16', 
            3, 
            'NanChang', 
            '330031', 
            'abcdef', 
            'bob@gmail.com', 
            'student'); 

INSERT INTO customer 
            (customerid, 
             customername, 
             loginname, 
             password, 
             logindate, 
             creditgradeid, 
             address, 
             zipcode) 
VALUES     (3, 
            '�ų�', 
            'John', 
            '1234', 
            '2014-10-16', 
            2, 
            'NanChang', 
            '330031');

SELECT * 
FROM   customer 

INSERT supplier 
       (supplierid, 
        suppliername, 
        loginname, 
        password, 
        address, 
        tel) 
VALUES( 1, 
        '������', 
        'weiyiwei', 
        '123456', 
        'ɽ������', 
        '15806887088' ) 

INSERT supplier 
       (supplierid, 
        suppliername, 
        loginname, 
        password, 
        address, 
        tel) 
VALUES( 2, 
        '���ʳƷ', 
        'gege', 
        '123456', 
        '����ӥ̶', 
        '15207011808' ) 

INSERT supplier 
       (supplierid, 
        suppliername, 
        loginname, 
        password, 
        address, 
        tel) 
VALUES( 3, 
        '��Ȫ', 
        'aoquan', 
        'qwerty', 
        '������̶', 
        '0731-56769098' ) 

INSERT supplier 
VALUES(4, 
       '����', 
       'zhongliang', 
       'zl123', 
       NULL, 
       NULL, 
       NULL, 
       '�����ϲ�', 
       '330031', 
       '18044445555', 
       NULL, 
       NULL); 

SELECT * 
FROM   supplier 
INSERT goods 
       (goodsid, 
        goodsname, 
        supplierid, 
        goodstypeid, 
        brand) 
VALUES(1, 
       '��צ', 
       1, 
       1, 
       '������') 

INSERT goods 
VALUES(2, 
       '��������', 
       3, 
       3, 
       '��Ȫ', 
       'DB43', 
       '���Ϸ�ζ', 
       1.0, 
       10) 

INSERT goods 
       (goodsid, 
        goodsname, 
        supplierid, 
        goodstypeid, 
        brand) 
VALUES(3, 
       '���', 
       2, 
       2, 
       '���ʳƷ') 

SELECT * 
FROM   goods 

INSERT orders 
       (orderid, 
        customerid, 
        goodsid, 
        quantity) 
VALUES(1, 
       1, 
       1, 
       4) 

INSERT orders 
       (orderid, 
        customerid, 
        goodsid, 
        quantity, 
        ordersum) 
VALUES(2, 
       3, 
       2, 
       4, 
       4) 

INSERT orders 
VALUES(3, 
       2, 
       2, 
       3, 
       3, 
       '2014-10-16') 

SELECT * 
FROM   orders 

INSERT creditgrade 
VALUES(1, 
       '���ƻ�Ա') 

INSERT creditgrade 
VALUES(2, 
       'ͭ�ƻ�Ա') 

INSERT creditgrade 
VALUES(3, 
       '���ƻ�Ա') 

INSERT creditgrade 
VALUES(4, 
       '���ƻ�Ա') 

SELECT * 
FROM   creditgrade 

INSERT goodstype 
VALUES(1, 
       '����Ʒ') 

INSERT goodstype 
VALUES(2, 
       '��ѹ���') 

INSERT goodstype 
VALUES(3, 
       '����Ʒ') 

INSERT goodstype 
VALUES(4, 
       '����')
SELECT * 
FROM   goodstype 
----��������
UPDATE goods SET price=2.0 WHERE goodsid=1
SELECT * FROM goods
DELETE FROM creditgrade WHERE creditgradeid=4
SELECT * FROM creditgrade
