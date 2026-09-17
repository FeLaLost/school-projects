create database bd_1c2_26
go
use bd_1c2_26_2
go

--table for employees
create table employee
(
  idemployee int,
  name varchar(50) not null,
  address varchar(100),
  city varchar(50),
  state char(2),
  email varchar(100) unique,
  birth date,
  position char(2),
  salary decimal(10,2),
  active bit
  primary key(idemployee)
  )
go
  select * from employee
