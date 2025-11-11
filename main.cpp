#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================









// ==================== Student Class Implementation ====================
 





// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   person p1;
    Student s1 ; 
   instructor i1;
   course c1;
   p1.Name= "Kareem";
   p1.id= 16007546;
   s1.YearLevel= 4; 
   s1.Major = " Computer Science " ; 
   i1.department= " ICT " ;
   i1.experienceYears= 5 ; 
   c1.CourseCode="CSEN50";
   c1.CourseName=" Computer Science " ; 
   c1.MaxStudents=70;
   c1.currentStudents= 40;
   DisplayCourse(CourseName, MaxStudents , CurrentStudents);   
    return 0;
}
