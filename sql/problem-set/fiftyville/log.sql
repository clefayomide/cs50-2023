-- Keep a log of any SQL queries you execute as you solve the mystery.
-- narrow my query down to the occurence day of the theft, the result shows that only two theft occurred that day at different time frame
select
    *
from
    crime_scene_reports
where
    street = 'Humphrey Street'
    and month = 7
    and day = 28
    and year = 2023;

-- Read through all interview transcript and the transcripts from Ruth, Eugene, and Raymond all have very good pointers about the thief
select
    *
from
    interviews
where
    month = 7
    and day = 28
    and year = 2023;

-- Ruth's transcript
-- Sometime within ten minutes of the theft, I saw the thief get into a car in the bakery parking lot and drive away. If you have security footage from the bakery parking lot, you might want to look for cars that left the parking lot in that time frame.
-- got all exit at the bakery parking lot within the theft time frame and eqauls to the theft date, within 10min
-- got people with the license plates recorded at the time frame
select
    *
from
    people
    join bakery_security_logs on people.license_plate = bakery_security_logs.license_plate
where
    bakery_security_logs.day = 28
    and bakery_security_logs.month = 7
    and bakery_security_logs.year = 2023
    and bakery_security_logs.activity = 'exit'
    and bakery_security_logs.hour = 10
    and bakery_security_logs.minute between 15 and 25;

-- Eugene's Transcript
-- Got all names, banks acount of people who withdrew at the atm on Leggett Street on the theft date and time
select
    *
from
    atm_transactions
    join bank_accounts on atm_transactions.account_number = bank_accounts.account_number
    join people on bank_accounts.person_id = people.id
where
    atm_transactions.atm_location = 'Leggett Street'
    and atm_transactions.transaction_type = 'withdraw'
    and atm_transactions.month = 7
    and atm_transactions.year = 2023
    and atm_transactions.day = 28;

-- Raymond's Transcript
-- get information about people who made a phone call in the said time frame on the theft date and time
-- here we see that bruce made a call to robin
select
    caller.name as Caller,
    receiver.name as Receiver
from
    phone_calls
    join people as caller on phone_calls.caller = caller.phone_number
    join people as receiver on phone_calls.receiver = receiver.phone_number
where
    phone_calls.month = 7
    and phone_calls.day = 28
    and phone_calls.year = 2023
    and phone_calls.duration between 0 and 100;


-- get details of people who boarded the plane the next day
select
    people.name,
    people.passport_number,
    people.license_plate,
    people.passport_number,
    destination.full_name,
    destination.city
from
    flights
    join airports as origin on flights.origin_airport_id = origin.id
    join airports as destination on flights.destination_airport_id = destination.id
    join passengers on flights.id = passengers.flight_id
    join people on passengers.passport_number = people.passport_number
where
    flights.year = 2023
    and flights.day = 29
    and flights.month = 7;