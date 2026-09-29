/*
* Date: 29/08/2026
* Description:
* This list focuses on exercises involving operators.
*/

CREATE DATABASE LanternStore
go
USE LanternStore
go

-- table
CREATE TABLE employees (
	idemployee INT PRIMARY KEY,
	name VARCHAR(100),
	salary DECIMAL(10,2),
	city VARCHAR(50),
	position VARCHAR(50),
	email VARCHAR(100)
);
go
select * from employees
go

INSERT INTO employees VALUES (001, 'Felipe Barbosa Santos', 314.00, 'Jundiaí', 'Dançarino', 'felipebsa.rei.delas@gmail.com');
INSERT INTO employees VALUES (002, 'Eduardo Antônio de Oliveira Bargueiras', 500.00, 'Valinhos', 'CEO', 'carroça.chan@gmail.com' );
INSERT INTO employees VALUES (003, 'Richard Murilo Araujo Freire', 10.00, 'Uberlândia', NULL, 'richard.S2.lari@gmail.com' );
INSERT INTO employees VALUES (004, 'Gabriel Fernandes Barbarini', 1000000.00, 'Campinas', 'ADM', 'lanlan@hotmail.com' );
INSERT INTO employees VALUES (005, 'Cauan Machado Souza', 1283.00, 'São Paulo', 'Gerente de Telemarketing', 'grande.locutor@gmail.com.br');
INSERT INTO employees VALUES (006, 'Guilherme Miguel Rodrigues Pereira Lakonski', 712.00, 'Valinhos', 'Atendente', 'lagosta.dump@hotmail.com.br');
INSERT INTO employees VALUES (007, 'Kevin Silva Fernandes', 67.67, 'Campinas', 'Vigilante', 'kevini.protini@hotmail.com');

go

-- exercices

-- 01 - Display the name and salary of the employees, adding 30% to the salary amount. Name the new column new_salary.
SELECT  name, salary, salary * 1.3 AS new_salary FROM employees;

-- 02 - Display the name, salary, and salary with a 20% discount; create a new column called "salary_discount" for employees in the city of Campinas.
SELECT  name, salary, salary * 0.80 AS salary_discount FROM employees WHERE city = 'Campinas';

-- 03 - List the names and salaries of employees who earn more than 1500.
SELECT name, salary FROM employees WHERE salary > 1500;

-- 04 - Display the name and city of employees who are not from the city of Valinhos. Do this in at least two different ways.
SELECT name, city FROM employees WHERE city != 'Valinhos';

SELECT name, city FROM employees WHERE city NOT LIKE 'Valinhos';

-- 05 - Display employee ID and city of employees from Valinhos or Campinas.
SELECT idemployee, city FROM employees WHERE city = 'Campinas' OR city = 'Valinhos';

-- 06 - Show the employee ID, position, and salary of employees who are not from the city of São Paulo and whose salary is greater than or equal to 1000.
SELECT idemployee, position, salary FROM employees WHERE city != 'São Paulo' and salary >= 1000.00;

-- 07 - Display the names of employees who do not have a position.
SELECT name FROM employees WHERE position IS NULL;

-- 08 - Display the name and salary of employees with salaries between 500 and 1500.
SELECT name, salary FROM employees WHERE salary >= 500 and salary <= 1500;

-- 09 - Display the name and email address of employees who use "Hotmail".
SELECT name, email FROM employees WHERE email LIKE '%hotmail%';
