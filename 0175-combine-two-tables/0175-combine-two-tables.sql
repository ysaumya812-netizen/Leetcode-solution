SELECT P.firstName,p.lastName,a.city,a.state
FROM Person P
LEFT JOIN Address a
ON p.personID=a.personID;