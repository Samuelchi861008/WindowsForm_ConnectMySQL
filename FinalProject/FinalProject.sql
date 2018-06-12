CREATE TABLE `REGISTRY`
(
  `Rnumber` int(3) NOT NULL,
  `Rphone` CHAR(10) NOT NULL,
  `Rcity` VARCHAR(20) NOT NULL,
  `Raddress` VARCHAR(100) NOT NULL,
  `Rname` VARCHAR(30) NOT NULL,
  PRIMARY KEY (`Rname`),
  UNIQUE KEY `Rname` (`Rname`)
);

INSERT INTO `REGISTRY`
VALUES ('001','0225474488','Taipei','2F., No.333, Dalong St., Datong Dist', 'Taipei registry')
,('002','0231042020','Taipei','3F.,No.222, Zhuangjing Rd., Xinyi Dist','Taipei registry S'),('003','0255849303','Taipei', '3F., No.201, Sec. 1, Bade Rd., Zhongzheng Dist','Taipei registry T'),('004','0226958783','Taipei','2F., No.205, Sec. 1, Civic Blvd., Datong Dist','Taipei registry F'),('005','0325976735', 'Taoyuan','3F., No.222, Kangle Rd., Zhongli Dist', 'Taoyuan registry'),('006','0326778912', 'Taoyuan','3F., No.222, Kangle Rd.,Zhongli Dist','Taoyuan registry S'),('007','0360148664', 'Hsinchu','3F., No.110, Lixing 1st Rd., East Dist', 'Hsinchu registry'),('008','0361171059', 'Hsinchu','2F., No.105, Rende St., North Dist', 'Hsinchu registry S');


CREATE TABLE `EXAMINEE`
(
  `name` VARCHAR(25) NOT NULL,
  `number` int(3) NOT NULL,
  `social_security_number` CHAR(10) NOT NULL,
  `birthdate` DATE DEFAULT NULL,
  `sex` CHAR(1) NOT NULL,
  `phone` CHAR(10) NOT NULL,
  `city` VARCHAR(20) NOT NULL,
  `address` VARCHAR(100) NOT NULL,
  `zip_code` INT(5) NOT NULL,
  `Rname` VARCHAR(30) NOT NULL,
  PRIMARY KEY (`name`),
  UNIQUE KEY `number` (`number`),
  UNIQUE KEY `social_security_number` (`social_security_number`),
  FOREIGN KEY (`Rname`) REFERENCES REGISTRY(`Rname`)on delete cascade on update cascade
);

INSERT INTO `EXAMINEE`
VALUES('DU YI FAN',001,'A108835533','1997-08-07','M','0911410807','Taipei','3F, No.98, Yijiang St,Zhongshan Dist','10457','Taipei registry'),
('HUANG	WAN RUI',002,'A280289875','1977-10-02','W','0952719626','Taipei','2F, No.60, Sanshui St, Wanhua Dist','10851','Taipei registry'),
('Zhang YA YUN',003,'H216106166','2001-11-05','W','0927728298','Taoyuan','2F, No.42, Sec. 1, Sanmin Rd., Zhongli Dist','32051','Taoyuan registry'),
('LIN YA HUI',004,'J257824620','1987-06-04','W','0970412233','Hsinchu','5F, No.80, Bade Rd, East Dist','30069','Hsinchu registry'),
('DU GUAN ZHI',005,'H143243543','1995-05-03','M','0972498623','Taoyuan','4F, No.60, Lixing 2nd Rd, East Dist','30078','Taoyuan registry S'),
('HONG JIAN DIAN',006,'H180290686','1990-12-06','M','0910854249','Taoyuan','3F, No.60, Xiashe, Guishan Dist','33352','Taoyuan registry S'),
('FANG YAN JIE',007,'J215895478','1991-08-08','W','0914502788','Hsinchu','2F, No.54, Dacheng St, East Dist','30041','Hsinchu registry S'),
('CHEN XIAO WEN',008,'A235468568','1982-02-15','W','0921456922','Taipei','7F, No.88, Yong’an St, Wenshan Dist','11650','Taipei registry S'),
('ZHOU BO XUN',009,'J175071876','1988-04-04','M','0910074275','Hsinchu','9F, No.77, Dahu Rd, Xiangshan Dist','30093','Hsinchu registry'),
('WANG YAN BO',010,'A153398316','2000-01-01','M','0931629744','Taipei','5F, No.65, Guangfu S Rd, Songshan Dist','10563','Taipei registry S');

CREATE TABLE `EXAMINATION`
(
  `Enumber` int(1) NOT NULL,
  `Equestion` VARCHAR(1000) NOT NULL,  
  `CorrectANS` CHAR(1) NOT NULL,
  PRIMARY KEY (`Equestion`),
  UNIQUE KEY `Equestion` (`Equestion`),
  UNIQUE KEY `Enumber` (`Enumber`)
);
insert into examination values( '1','Given the code fragment:
int [] [] array2D = {{0, 1, 2}, {3, 4, 5, 6}};
system.out.print (array2D[0].length+ "" );
system.out.print(array2D[1].getClass(). isArray() + "");
system.out.println (array2D[0][1]);
What is the result?
A. 3false1
B. 2true3
C. 2false3
D. 3true1
E. 3false3
F. 2true1
G. 2false1
','D' ), ( '2','View the exhibit:
public class Student {
 public String name = "";
 public int age = 0;
 public String major = "Undeclared";
 public boolean fulltime = true;
 public void display() {
 System.out.println("Name: " + name + " Major: " + major);
B. Bob’s Name: Jian
C. Nothing prints
D. Bob’s name
','B' ), ( '3','Given the code fragment:
String valid = "true";
if (valid)
{
 System.out.println ("valid");
}
else
{
 System.out.println ("not valid");
}
What is the result?
A. Valid
B. not valid
C. Compilation fails
D. An IllegalArgumentException is thrown at run time
','C' ),( '4','Given:
public class ScopeTest
{
 int z;
 public static void main(String[] args){
 ScopeTest myScope = new ScopeTest();
 int z = 6;
 System.out.println(z);
 myScope.doStuff();
 System.out.println(z);
 System.out.println(myScope.z);
}
 void doStuff() {
 int z = 5;
 doStuff2();
 System.out.println(z);
 }
 void doStuff2()
 {
 z = 4;
 }
}
What is the result?
A. 6 5 6 4
B. 6 5 5 4
C. 6 5 6 6
D. 6 5 6 5
','A' ), ( '5','An unchecked exception occurs in a method dosomething()
Should other code be added in the dosomething() method for it to compile and execute?
A. The Exception must be caught
B. The Exception must be declared to be thrown.
C. The Exception must be caught or declared to be thrown.
D. No other code needs to be added.
','C' ), ( '6','Given the code fragment:
int b = 4;
b -- ;
System.out.println (-- b);
System.out.println(b);
What is the result?
A. 2 2
B. 1 2
C. 3 2
D. 3 3
','A' ),( '7','Given the code fragment:
Int [] [] array = {{0}, {0, 1}, {0, 2, 4}, {0, 3, 6, 9}, {0, 4, 8, 12, 16}};
Systemout.printIn(array [4] [1]);
System.out.printIn (array) [1][4]);
int [] [] array = {{0}, {0, 1}, {0, 2, 4}, {0, 3, 6, 9}, {0, 4, 8, 12, 16}};
System.out.println(array [4][1]);
System.out.println(array) [1][4]);
What is the result?
A. 4 Null
B. Null 4
C. An IllegalArgumentException is thrown at run time
D. 4 An ArrayIndexOutOfBoundException is thrown at run time
','D' ), ( '8','Given:
public class DoCompare1 {
 public static void main(String[] args) {
 String[] table = {"aa", "bb", "cc"};
 for (String ss: table) {
 int ii = 0;
 while (ii < table.length) {
 System.out.println(ss + ", " + ii);
 ii++;
 }
}
How many times is 2 printed as a part of the output?
A. Zero
B. Once
C. Twice
D. Thrice
E. Compilation fails.
','D' ) ,( '9','Given:
lass X
{
 String str = "default";
 X(String s)
 {
 str = s;
 }
 void print ()
 {
 System.out.println(str);
 }
 public static void main(String[] args)
 {
 new X("hello").print();
 }
}
What is the result?
A. hello
B. default
C. Compilation fails
D. The program prints nothing
E. An exception is thrown at run time
','A' ) , ( '10','public class SampleClass
{
 public static void main(String[] args)
 {
 AnotherSampleClass asc = new AnotherSampleClass();
 SampleClass sc = new SampleClass();
 // TODO code application logic here
 }
}
class AnotherSampleClass extends SampleClass
{
}
Which statement, when inserted into line "// TODO code application logic here ", is valid change?
A. asc = sc;
B. sc = asc;
C. asc = (object) sc;
D. asc = sc.clone ()
','B' ) ,( '11','Given the code fragment:
System.out.println("Result: " + 2 + 3 + 5);
System.out.println("Result: " + 2 + 3 * 5);
What is the result?
A. Result: 10
Result: 30
B. Result: 10
Result: 25
C. Result: 235
Result: 215
D. Result: 215
Result: 215
E. Compilation fails
','C' ) , ( '12','Which code fragment is illegal?
A. class Base1 {
abstract class Abs1 { }}
B. abstract class Abs1 {
void doit () { }}
C. class Basel {
abstract class Abs1 extends Basel {
D. abstract int var1 = 89;
','D' ) , ( '13','Given:
public class x
{
 public static void main (string [] args)
 {
 String theString = "Hello World";
 System.out.println(theString.charAt(11));
 }
}
What is the result?
A. There is no output
B. d is output
C. A StringIndexOutOfBoundsException is thrown at runtime
D. An ArrayIndexOutOfBoundsException is thrown at runtime
E. A NullPointException is thrown at runtime
F. A StringArrayIndexOutOfBoundsException is thrown at runtime
','C' ) , ( '14','Given:
String message1 = "Wham bam!";
String message2 = new String("Wham bam!");
if (message1 == message2)
 System.out.println("They match");
if (message1.equals(message2))
 System.out.println("They really match");
What is the result?
A. They match
They really match
B. They really match
C. They match
D. Nothing Prints
E. They really match
They really match
','B' ) , ( '15','Given the code fragment:
String h1 = "Bob";
String h2 = new String ("Bob");
What is the best way to test that the values of h1 and h2 are the same?
A. if (h1 == h2)
B. if (h1.equals(h2))
C. if (h1 = = h2)
D. if (h1.same(h2))
','B' ) , ( '16','Given the code fragment:
System.out.println ("Result:" +3+5);
System.out.println ("result:" + (3+5));
What is the result?
A. Result: 8
Result: 8
B. Result: 35
Result: 8
C. Result: 8
Result: 35
D. Result: 35
Result: 35
','B' ) ,( '17','Given the code fragment:
String color = "Red";
 switch(color)
 {
 case "Red":
 System.out.println("Found Red");
 case "Blue":
 System.out.println("Found Blue");
 break;
 case "White":
 System.out.println("Found White");
 break;
 default:
 System.out.println("Found Default");
 }
What is the result?
A. Found Red
B. Found Red
Found Blue
C. Found Red
Found Blue
Found White
D. Found Red
Found Blue
Found White
Found Default
','B' ) , ( '18','Given the code fragment:
 int j=0, k =0;
 for (int i=0; i < x; i++)
 {
 do
 {
 k=0;
 while (k < z)
 {
 k++;
 System.out.print(k + " ");
 }
 System.out.println(" ");
 j++;
 } while (j < y);
 System.out.println("----");
 }
What values of x, y, z will produce the following result?
1 2 3 4
1 2 3 4
1 2 3 4 ------ 1 2 3 4 ------
A. X = 2, Y = 3, Z = 4
B. X = 3, Y = 2, Z = 3
C. X = 2, Y = 3, Z = 3
D. X = 4, Y = 2, Z = 3
','A' ) , ( '19','Which statement initializes a stringBuilder to a capacity of 128?
A. StringBuilder sb = new String("128");
B. StringBuilder sb = StringBuilder.setCapacity(128);
C. StringBuilder sb = StringBuilder.getInstance(128);
D. StringBuilder sb = new StringBuilder(128);
','D' ) , ( '20','Given:
public class DoCompare4
{
 public static void main(String[] args)
 {
 String[] table = {"aa", "bb", "cc"};
 int ii =0;
 do
 while (ii < table.length)
 System.out.println(ii++);
 while (ii < table.length);
 }
}
What is the result?
A. 0
1
B. 0
1
2
C. 0
1
2
3
D. Compilation fails
','B' ) , ( '21','A method is declared to take three arguments. A program calls this method and passes only two arguments. What is the result?
A. Compilation fails.
B. The third argument is given the value null.
C. The third argument is given the value void.
D. The third argument is given the value zero.
E. The third argument is given the appropriate false value for its declared type.
F. An exception occurs when the method attempts to access the third argument.
','A' ) , ( '22','Given the fragment:
int [] array = {1, 2, 3, 4, 5};
System.arraycopy (array, 2, array, 1, 2);
System.out.print (array [1]);
System.out.print (array[4]);
What is the result?
A. 14
B. 15
C. 24
D. 35

','D' ),( '23','Given:
public class MyFor3
{
 public static void main(String[] args)
 {
 int [] xx = null;
 System.out.println(xx);
 }
}
What is the result?
A. null
B. compilation fails
C. Java.lang.NullPointerException
D. 0
','A' ), ( '24','Given:
public class Main
{
 public static void main(String[] args)
 {
 doSomething();
 }
 private static void doSomething()
 {
 doSomeThingElse();
 }
 private static void doSomeThingElse()
 {
 throw new Exception();
 }
}
Which approach ensures that the class can be compiled and run?
A. Put the throw new Exception() statement in the try block of try catch
B. Put the doSomethingElse() method in the try block of a try catch
C. Put the doSomething() method in the try block of a try catch
D. Put the doSomething() method and the doSomethingElse() method in the try block of a try catch
','A' ) , ( '25','Given:
public class ScopeTest1
{
 public static void main(String[] args)
 {
 doStuff(); // line x1
 int x1 = x2; // line x2
 int x2 = j; // line x3
 }
 static void doStuff() {
 System.out.println(j); // line x4
}
 static int j;
}
Which line causes a compilation error?
A. line x1
B. line x2
C. line x3
D. line x4
','B' ) , ( '26','Given:
class Overloading {
 void x(int i) {
 System.out.println("one");
 }
 void x(String s) {
 System.out.println("two");
 }
 void x(double d) {
 System.out.println("three");
 }
 public static void main(String[] args) {
 new Overloading().x(4.0);
 }
}
What is the result?
A. One
B. Two
C. Three
D. Compilation fails
','C' ) , ( '27','Which declaration initializes a boolean variable?
A. boolean h = 1;
B. boolean k = 0;
C. boolean m = null;
D. boolean j = (1 < 5) ;
','D' ) , ( '28','Given:
public class Basic {
 private static int letter;
 public static int getLetter();
 public static void Main(String[] args) {
 System.out.println(getLetter());
 }
}
Why will the code not compile?
A. A static field cannot be private.
B. The getLetter method has no body.
C. There is no setletter method.
D. The letter field is uninitialized.
E. It contains a method named Main instead of main
','B' ) , ( '29','Given a code fragment:
StringBuilder sb = new StringBuilder();
String h1 = "HelloWorld";
sb.append("Hello").append("world");
if (h1 == sb.toString()) {
 System.out.println("They match");
}
if (h1.equals(sb.toString())) {
 System.out.println("They really match");
}
What is the result?
A. They match
They really match
B. They really match
C. They match
D. Nothing is printed to the screen
','D' ) , ('30', 'Given the code fragment:\r\nBoolean b1 = true;\r\nBoolean b2 = false;\r\nint 1 = 0;\r\nwhile (foo) {}\r\nWhich one is valid as a replacement for foo?\r\nA. b1.compareTo(b2)\r\nB. i = 1\r\nC. i == 2? -1:0\r\nD. \"foo\".equals(\"bar\")\r\n', 'D'
), ('31', 'Give:\r\nPublic Class Test {\r\n}\r\nWhich two packages are automatically imported into the java source file by the java compiler?\r\nA. Java.lang\r\nB. Java.awt\r\nC. Javax.net\r\nD. Java.*\r\n', 'A'
),( '32','Given:
public class X implements Z
{
 public String toString()
 {
 return "I am X";
 }
 public static void main(String[] args)
 {
 Y myY = new Y();
 X myX = myY;
 Z myZ = myX;
 System.out.println(myZ);
 }
}
class Y extends X
{
 public String toString()
 {
 return "I am Y";
 }
}
interface Z { }
What is the reference type of myZ and what is the type of the object it references?
A. Reference type is Z; object type is Z.
B. Reference type is Y; object type is Y.
C. Reference type is Z; object type is Y.
D. Reference type is X; object type is Z.
','C' ), ( '33','Given:
class SampleClass
{
}
class AnotherSampleClass extends SampleClass
{
}
class Test
{
 public static void main(String[] args)
 {
 SampleClass sc = new SampleClass();
 AnotherSampleClass asc = new AnotherSampleClass();
 sc = asc;
 System.out.println("sc: " + sc.getClass());
 System.out.println("asc: " + asc.getClass());
 }
}
What is the result?
A. sc: class.Object
asc: class.AnotherSampleClass
B. sc: class.SampleClass
asc: class.AnotherSampleClass
C. sc: class.AnotherSampleClass
asc: class.SampleClass
D. sc: class.AnotherSampleClass
asc: class.AnotherSampleClass
','D' ), ( '34','Given the code fragment:
public static void main(String[] args)
{
 String [] table = {"aa", "bb", "cc"};
 int ii = 0;
 for (String ss:table)
 {
 while (ii < table.length)
 {
 System.out.println (ii);
 ii++;
 break;
 }
 }
}
How many times is 2 printed?
A. zero
B. once
C. twice
D. thrice
E. it is not printed because compilation fails
','B' ) , ( '35','Given:
public class SampleClass
{
 public static void main(String[] args)
 {
 SampleClass sc, scA, scB;
 sc = new SampleClass();
 scA = new SampleClassA();
 scB = new SampleClassB();
 System.out.println("Hash is : " + sc.getHash() + ", " + scA.getHash() + ", " + scB.getHash());
 }
 public int getHash()
 {
 return 111111;
 }
}
class SampleClassA extends SampleClass
{
 public long getHash()
 {
 return 44444444;
 }
}
class SampleClassB extends SampleClass
{
 public long getHash()
 {
 return 999999999;
 }
}
What is the result?
A. Compilation fails
B. An exception is thrown at runtime
C. There is no result because this is not correct way to determine the hash code "Pass Any Exam. Any Time." - www.actualtests.com 51
Oracle 1z0-803 Exam
D. Hash is: 111111, 44444444, 999999999
','A' ) , ( '36','Given:
public abstract class Wow {
 private int wow;
 public wow(int wow) {
 this.wow = wow;
 }
 public void wow() {}
 private void wowza() {}
}
What is true about the class Wow?
A. It compiles without error.
B. It does NOT compile because an abstract class CANNOT have private methods.
C. It does NOT compile because an abstract class CANNOT have instance variables.
D. It does NOT compile because an abstract class must have at least one abstract method.
E. It does NOT compile because an abstract class must have a constructor with no arguments.
','C' ), ( '37','Given:
class X
{
 static void m(int i)
 {
 }
 public static void main(String[] args)
 {
 int j = 12;
 m (j);
 System.out.println(j);
 }
}
What is the result?
A. 7
B. 12
C. 19
D. Compilation fails
E. An exception is thrown at run time
','B' ), ( '38','Given:
class Overloading {
 int x(double d) {
 System.out.println("one");
 return 0;
 }
 String x(double d) {
 System.out.println("two");
 return null;
 }
 double x(double d) {
 System.out.println("three");
 return 0.0;
 }
 public static void main(String[] args) {
 new Overloading().x(4.0)
 }
}
What is the result?
A. One
B. Two
C. Three
D. Compilation fails
','D' ), ( '39','The catch clause argument is always of type___________.
A. Exception
B. Exception but NOT including RuntimeException
C. Throwable
D. RuntimeException
','C' ), ( '40','Given the code fragment:
1. ArrayList<Integer> list = new ArrayList<>(1);
2. list.add(1001);
3. list.add(1002);
4. System.out.println(list.get(list.size()));
What is the result?
A. Compilation fails due to an error on line 1.
B. An exception is thrown at run time due to error on line 3
C. An exception is thrown at run time due to error on line 4
D. 1002
','C' ), ( '41','View the Exhibit.
public class Hat {
 public int ID = 0;
 public String name = "hat";
 public String size = "One Size Fit All";
 public String color = "";
 public String getName() {
 return name;
 }
 public void setName(String name) {
 this.name = name;
 }
}
Given
public class TestHat {
 public static void main(String[] args) {
 Hat blackCowboyHat = new Hat();
 }
}
Which statement sets the name of the Hat instance?
A. blackCowboyHat.setName = "Cowboy Hat";
B. setName("Cowboy Hat");
C. Hat.setName("Cowboy Hat");
D. blackCowboyHat.setName("Cowboy Hat");
','D' ) , ( '42','QUESTION 70
Given:
public class MyFor
{
 public static void main(String[] args)
 {
 for (int ii = 0; ii < 4; ii++)
 {
 System.out.println("ii = "+ ii);
 ii = ii +1;
 }
 }
}
What is the result?
A. ii = 0
ii = 2
B. ii = 0
ii = 1
ii = 2
ii = 3
C. ii =
D. Compilation fails.
','A' ) , ( '43','Given:
public class DoBreak1
{
 public static void main(String[] args)
 {
 String[] table = {"aa", "bb", "cc", "dd"};
 for (String ss: table)
 {
 if ( "bb".equals(ss))
 {
 continue;
 }
 System.out.println(ss);
 if ( "cc".equals(ss))
 {
 break;
 }
 }
 }
}
What is the result?
A. aa
cc
B. aa
bb
cc
C. cc
dd
D. cc
E. Compilation fails.
','A' ) , ( '44','Which is a valid abstract class?
A. public abstract class Car {
protected void accelerate();
}
B. public interface Car {
protected abstract void accelerate();
}
C. public abstract class Car {
protected final void accelerate();
}
D. public abstract class Car {
protected abstract void accelerate();
}
E. public abstract class Car {
protected abstract void accelerate() {
//more car can do
}}
','D' ) , ( '45','public class Student {
 public String name = "";
 public int age = 0;
 public String major = "Undeclared";
 public boolean fulltime = true;
 public void display() {
 System.out.println("Name: " + name + " Major: " + major);
 }
 public boolean isFullTime() {
 return fulltime;
 }
}
Which line of code initializes a student instance?
A. Student student1;
B. Student student1 = Student.new();
C. Student student1 = new Student();
D. Student student1 = Student();
','C' ) , ( '46','int [] array = {1,2,3,4,5};
for (int i: array) {
if ( i < 2) {
keyword1 ;
}
System.out.println(i);
if ( i == 3) {
keyword2 ;
}}
What should keyword1 and keyword2 be respectively, in oreder to produce output 2345?
A. continue, break
B. break, break
C. break, continue
D. continue, continue
','D' ), ( '47','Given:
boolean log3 = ( 5.0 != 6.0) && ( 4 != 5);
boolean log4 = (4 != 4) || (4 == 4);
System.out.println("log3:"+ log3 + \nlog4" + log4);
What is the result?
A. log3:false
log4:true
B. log3:true
log4:true
C. log3:true
log4:false
D. log3:false
log4:false
','B' ), ( '48','Which statement will emoty the contents of a StringBuilder variable named sb?
A. sb.deleteAll();
B. sb.delete(0, sb.size());
C. sb.delete(0, sb.length());
D. sb.removeAll();
','C' ), ( '49','Given:
Class StaticField {
 static int i = 7;
 public static void main(String[] args) {
 StaticFied obj = new StaticField();
 obj.i++;
 StaticField.i++;
 obj.i++;
 System.out.println(StaticField.i + " " + obj.i);
 }
}
What is the result?
A. 10 10
B. 8 9
C. 9 8
D. 7 10
','A' ) , ( '50','Given:
class Overloading {
 int x(double d) {
 System.out.println("one");
 return 0;
 }
 String x(double d) {
 System.out.println("two");
 return null;
 }
 double x(double d) {
 System.out.println("three");
 return 0.0;
 }
 public static void main(String[] args) {
 new Overloading().x(4.0);
 }
}
What is the result?
A. one
B. two
C. three
D. Compilation fails.
','D' )  ;

CREATE TABLE `ExamineeANS`
(
  `Enumber` int(1) NOT NULL,
  `ExamineeANS` CHAR(1) NOT NULL,
  `number` int(3) NOT NULL,
  FOREIGN KEY (`number`) REFERENCES EXAMINEE(`number`) on delete cascade on update cascade ,
  FOREIGN KEY (`Enumber`) REFERENCES EXAMINATION(`Enumber`) on delete cascade on update cascade
);


CREATE TABLE GRADE_REPORT
(
  `letter_grade` CHAR(2) NOT NULL,
  `numeric_grade` INT(3) NOT NULL,
  `Elevel` CHAR(2) NOT NULL,
  `Ename` VARCHAR(15) NOT NULL,
  `name` VARCHAR(25) NOT NULL,
  `social_security_number` CHAR(10) NOT NULL,
  PRIMARY KEY (`Ename`,`social_security_number`),
  FOREIGN KEY (`social_security_number`) REFERENCES EXAMINEE(`social_security_number`)on delete cascade on update cascade,
  FOREIGN KEY (`name`) REFERENCES EXAMINEE(`name`)on delete cascade on update cascade
);