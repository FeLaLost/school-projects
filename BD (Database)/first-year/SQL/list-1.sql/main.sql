/*
* Date: 29/08/2026
* Description:
* This list focuses on exercises involving operators.
*/

CREATE DATABASE LanternStore
go
USE LanternStore
go

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
