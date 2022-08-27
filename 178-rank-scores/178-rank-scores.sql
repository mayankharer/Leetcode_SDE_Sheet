# Write your MySQL query statement below
# select * from 
#     scores 
# ORDER BY
#     score
# DESC;

SELECT 
    Score, DENSE_RANK() 
OVER 
    (ORDER BY Score DESC) AS 'Rank'
FROM 
    Scores ;