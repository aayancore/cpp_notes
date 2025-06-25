
select * from student;
select * from courses;
select * from StudentCourses;
select s.*, sc.cno, c.cname
from Student s
inner join StudentCourses sc on s.sno = sc.sno
inner join Courses c on sc.cno = c.cno;

select s.*, sc.cno, c.cname
from student s, StudentCourses sc, courses c
where s.sno = sc.sno and c.cno = sc.cno;

select s.*, m.sname
from student s, student m
where m.sno = s.Manager;

select s.*, m.sname
from Student s
inner join Student M on s.Manager = m.sno;