/*
* Date: 17/09/2026
* Description:
* This exercise list focuses on date operations.
*/

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
go

  insert into employee(idemployee,
  name, address,city, state, email,
  birth, position, salary, active)
 values (1, 'José da Silva', 'Av. São Paulo', 'Itu', 'SP', 'zesilva@yahoo.com.br',
'1991-02-24', 'Al',1000, 0),
(2, 'Byuhl Gueittys', 'Av. Maicroçofiti, 95', 'Janela', 'SP',
 'emeiodobiu@epow.com', '1965-12-25', 'PC', 2000,1),
(3,'Ana Pimenta','Rua da Saúde, 11','Jundiaí','SP','pimentinha@hotmail.com','1987-01-01','TI',750,1),
(4,'Mário Lopes','Rua Angélica, 143','Jundiaí','SP','mlopes@hotmail.com','1985-04-10','TI',750,0),
(5, 'Ana Maria Souza', 'Av. das Nações da Paz', 'ONU', 'US', 'iloveny@boom.com',
'1950-01-01','TI', 5000,1),
(6, 'Maria de Fátima', 'Rua das Maçãs', 'Apple City', 'US', 'me@me.com',
'1990-01-01','AL',2000,1), 
(7, 'José Maria de Oliveira', 'Av. das Nações da Paz', 'ONU', 'US', 'iloveny5@boom.com',
'1950-01-01','TI',5000,1),
(8, 'André dos Santos Maria', 'Rua das Maçãs', 'Apple City', 'US', 'me@me12.com',
'1990-01-01','AL',2400,0),
(9,'Jorge Luis Rodrigues','Av. da Saudade,1989','São Paulo','SP','jorgeluiz@yahoo.com.br',
'1990-05-05','PC',3000,1),
(10,'Ana Paula Camargo','Rua Costa e Silva, 33','Jundiaí','SP','apcamargo@gmail.com',
'1991-06-20','TI',1100,1),
(11,'Ivo Cunha','Rua Nicolau Coelho, 22','São Paulo', 'SP','cis@bol.com.br','1988-04-30',
'PC',2200,1) 
go

-- exercices --

-- 01 - Display the employees' names and dates of birth, separating the day, month, and year into columns.
select name, day(birth) as day, month(birth) as month, year(birth) as year from employee

-- 02 - Display the names of the months from the employees' dates of birth, sorted and without duplicates.
select datename(month, birth) as month_name from employee group by datename(month, birth), month(birth) order by month(birth);

-- 03 - Display the idemployee of all employees born in 1987.
select idemployee from employee where year(birth) = 1987;

-- 04 - Display the name and day of birth of employees born in April 1988. 
select name, day(birth) as day_birth from employee where month(birth) = 4 and year(birth) = 1988;

-- 05 - Display the employees' names and dates of birth, plus two months.
select name, dateadd(month, 2, birth) as birth from employee;

-- 06 - Display the employees' names and ages, calculating the age based on their date of birth and today's date.
select name, datediff(year, birth, getdate()) - case when month(birth) > month(getdate()) or (month(birth) = month(getdate()) and day(birth) > day(getdate())) then 1 else 0 end as age from employee;

--07 - Display the employee ID, name, and birth year of employees born between March and May 1990.
select idemployee, name, year(birth) as birth_year from employee where birth between '1990-03-01' and '1990-05-31';

-- 08 - Display the name and year of birth of employees from the state of São Paulo.
select name, year(birth) as birth_year from employee where state = 'sp';

-- 09 - Display the names and dates of birth of employees born before 1990.
select name, birth from employee where year(birth) < 1990;

-- 10 - Display the city and state of employees born after 1989, without repeating the data.
select distinct city, state from employee where year(birth) > 1989;

-- 11 - Display all data for employees born in the years 1988 and 1990.
select * from employee where year(birth) in (1988, 1990);

-- 12 - Display the names of employees born on the 30th.
select name from employee where day(birth) = 30;
