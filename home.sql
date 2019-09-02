create database home;

use home;

create table flats (
	id INT NOT NULL AUTO_INCREMENT primary key,
    flat_no int(99) not null,
    flat_floor int(99) not null,
    flat_joined  datetime not null,
    flat_left  datetime not null,
    profile_id  varchar(99) not null,
    payment_id varchar(99) not null
    
);
alter table flats add constraint flats_fk_profile_id foreign key (profile_id) references profile(id);
alter table flats add constraint flats_fk_payment_id foreign key (payment_id) references payment(id);

create table payment (
	 id INT NOT NULL AUTO_INCREMENT primary key,
     rent_fee varchar(99) not null,
     electricity_bill varchar(99) not null,
     water_bill varchar(99) not null,
	 total varchar(99) not null,
     amount_paid varchar(99) not null,
     amount_due varchar(99) not null,
     amount_balance varchar(99) not null,
     amount_paid_on timestamp not null,
     amount_paid_by varchar(30) not null
);

create table address (
	id varchar(99) primary key,
	lane varchar(99),
	land_mark varchar(99),
	city varchar(30),
	state varchar(30),
	country varchar(30) default 'India',
	zipcode int(9)
);

create table img (
     id varchar(99) primary key,
     name varchar(99) default 'upload',
     src longtext
);


create table profile (
    id varchar(99) primary key,
    name varchar(50) not null  ,
    mobile varchar(15) not null,
    email varchar(99),
    aadhar varchar(99),
    occupation varchar(99) not null,
    family_members varchar(99) not null,
    password varchar(30) not null default '1234',
    address_id varchar(30),
    img_id varchar(30) ,
    active boolean not null default true,
    created_by varchar(30) not null default 'system',
    created_on timestamp not null default now(),
    updated_by varchar(30) not null default 'system',
    updated_on timestamp not null default now()
);
alter table profile add constraint profile_fk_address_id foreign key (address_id) references address(id);
alter table profile add constraint profile_fk_img_id foreign key (img_id) references img(id);
