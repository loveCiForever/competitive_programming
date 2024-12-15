SELECT users.name as NAME, SUM(transactions.amount) as BALANCE
    FROM Users users
    JOIN Transactions as transactions ON users.account = transactions.account
    GROUP BY users.name
    HAVING SUM(transactions.amount) > 10000