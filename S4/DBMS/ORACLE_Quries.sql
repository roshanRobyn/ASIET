create table salesmanR(salesman_id number(5) primary key, name char(5), city char(5) , commission decimal(5,2));
 create table ordersR(ord_no number(5), purch_amt number(4), ord_date date, cust_id number(5), salesman_id number(5), foreign key(salesman_id) references salesmanR(saleman_id));
 create table customerR(cust_id number(5), cust_name char(15), city char(5), grade char(1), salesman_id number(5), foreign key(salesman_id) references salesmanR(salesman_id));
 insert into ordersR
 values (&ord_no,&purch_amt,'&ord_date',&cust_id,&salesman_id);
 insert into customerR
values (&cust_id,'&cust_name','&city','&grade',&salesman_id);
select salesman_id,name,commission from salesmanR;
select ord_date,salesman_id,ord_no,purch_amt from ordersR;
select DISTINCT salesman_id from ordersR;
select name from salesmanR where city= 'kochi';
select ord_no,ord_date,purch_amt from ordersR where salesman_id= 001;
create table novel_win(year number(5),subject char(10), country char(3) , cat char(5));
insert into novel_win
values ('&winner',&year,'&subject','&country','&cat');
select winner from novel_win where year=1971;
select winner from novel_win where subject='physics' AND year>=1950;
select year,subject,winner,country from novel_win where year>=1965 and year<=1975 and subject='chemistry';
select year,subject,winner from novel_win where winner like 'mark%';
select * from novel_win where (subject='physics' and year=1969) union ( select * from novel_win where (subject='math' and year=1971));
select * from novel_win where year>=1970 and subject not in('chemistry','math');
select * from novel_win where subject not like 'p%' order by year;
create table productsR(pid number(1),pprice number(4),pname char(5));
insert into productsR
values (&pid,&pprice,'&pname');
select min(pprice) as MINIMUM_price from productsR;
select count(pprice) as TOTAL_NO_PRODUCTS from productsR;

