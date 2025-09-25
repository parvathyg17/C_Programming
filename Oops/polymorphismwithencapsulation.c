// Create a class Shape with a method area(). Create subclasses Circle and Rectangle that override the area() method to calculate the area of their respective shapes.



class Main {
    public static void main(String[] args) {
       Circle c=new Circle(5);
       c.area();
       System.out.println("radius is "+c.getr());
       Rectangle rec=new Rectangle(5,2);
       rec.area();
    }
}
class Shape{
    void area(){
        System.out.println("i am going to calculate area");
        
    }
}
class Circle extends Shape{
    final double pi=3.14;
    private double r;
       Circle(double r){
         
           this.r=r;
       }
       public double getr(){
           return r;
       }
       public void setr(double r){
           this.r=r;
       }
       void area(){
           double result=pi*r*r;
        System.out.println("Area of circle is"+result);
    }

    
}
class Rectangle extends Shape{
    int l;
    int b;
   Rectangle(int l,int b){
        this.l=l;
        this.b=b;
   }
   void area(){
        int result=l*b;
        System.out.println("area of rectangle is:"+result);
    }
}