# Write your MySQL query statement below
/*self join-----w1 represents the current day.
w2 represents the previous day.creating two copies of the same table so SQL can compare one day's record with another day's record.
w1 date	w1temp	w2 date	w2temp
Jan 2	25	   Jan 1	10
Jan 3	20	   Jan 2	25
Jan 4	30	   Jan 3	20*/

SELECT w1.id 
FROM Weather w1
JOIN Weather w2
ON DATEDIFF(w1.recordDate, w2.recordDate) = 1
WHERE w1.temperature > w2.temperature;