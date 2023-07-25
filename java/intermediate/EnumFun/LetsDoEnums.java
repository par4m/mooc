package EnumFun;

public class LetsDoEnums {
     enum Flavours {
        CHOCOLATE, VANILLA, STRAWBERRY;
        public static void getVanilla() {
            System.out.println(Flavours.VANILLA);
        }
     }
    public static void main(String[] args) {
        Flavours flavour = Flavours.VANILLA;
        if(flavour == Flavours.VANILLA) {
            System.out.println("It's Vanilla");
        }
        else if(flavour == flavour.CHOCOLATE) {
            System.out.println("Its Chocolate");
        }
        else if (flavour==flavour.STRAWBERRY){
            System.out.println("it's strawberry ");
        }
    }

}
