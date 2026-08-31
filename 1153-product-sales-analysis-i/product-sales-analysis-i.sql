# Write your MySQL query statement below
SELECT Product.product_name,Sales.year,sales.price
from Sales
LEFT JOIN Product ON Sales.product_id = Product.product_id;