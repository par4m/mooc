public class Main {
    public static void main(String[] args) {
        Student param = new Student("param", 17, 100); // constructor
        System.out.println(param.rno);
        System.out.println(param.name);
        System.out.println(param.marks);
        param.Greeting();
        param.changeName("null");
        Student random = new Student();
        Student random1 = new Student(param);
        System.out.println(random1.name);
        System.out.println(random1.rno);
        System.out.println(random1.marks);
        Student one = new Student();
        Student two = one;
        one.name = "Something Something";
        System.out.println(two.name);

    }

}

// creating a class
// for every single student
class Student {
    int rno = 0;
    String name = "no";
    float marks = 1.0f;

    void Greeting() {
        System.out.println("Hello My Name is " + name);
    }

    void changeName(String newName) {
        this.name = newName;
    }

    Student(String name, int rno, float marks) {
        this.name = name;
        this.rno = rno;
        this.marks = marks;
    }

    Student() {
        // this is how u call a constructor from another constructor
        // internally: new Student("default person", 13, 100.0f)
        this("default person", 13, 100.0f);
    }

    Student(Student other) {
        this.name = other.name;
        this.rno = other.rno;
        this.marks = other.marks;
    }

}