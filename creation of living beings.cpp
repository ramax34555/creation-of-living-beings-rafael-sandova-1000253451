// EarthBeing Interface
interface EarthBeing {
    void born();
    void grow();
    void respawn();
    void die();
}

// SkyBeing Interface
interface SkyBeing {
    void fly();
    void changeDimension();
}

// Abstract class LivingBeing
abstract class LivingBeing {
    abstract void born();
    abstract void grow();
    abstract void reproduce();
    abstract void die();
}

// Creator interface
interface Creator {
    LivingBeing createLivingBeing();
}

// LivingBeingCreator class
class LivingBeingCreator implements Creator {
    public LivingBeing createLivingBeing() {
        return new Human();
    }
}

// Human class
class Human extends LivingBeing implements EarthBeing, SkyBeing {
    public void born() {
        System.out.println("Human born");
    }

    public void grow() {
        System.out.println("Human grow");
    }

    public void respawn() {
        System.out.println("Human respawn");
    }

    public void die() {
        System.out.println("Human die");
    }

    public void fly() {
        System.out.println("Human fly");
    }

    public void changeDimension() {
        System.out.println("Human change dimension");
    }
}

// BeingsOfTheEarth package
package BeingsOfTheEarth;

// Animal class
public class Animal extends LivingBeing implements EarthBeing {
    public void born() {
        System.out.println("Animal born");
    }

    public void grow() {
        System.out.println("Animal grow");
    }

    public void reproduce() {
        System.out.println("Animal reproduce");
    }

    public void die() {
        System.out.println("Animal die");
    }
}

// SkyBeings package
package SkyBeings;

// Bird class
public class Bird extends LivingBeing implements SkyBeing {
    public void born() {
        System.out.println("Bird born");
    }

    public void grow() {
        System.out.println("Bird grow");
    }

    public void reproduce() {
        System.out.println("Bird reproduce");
    }

    public void die() {
        System.out.println("Bird die");
    }

    public void fly() {
        System.out.println("Bird fly");
    }

    public void changeDimension() {
        System.out.println("Bird change dimension");
    }
}

public class Main {
    public static void main(String[] args) {
        Creator creator = new LivingBeingCreator();

        LivingBeing human = creator.createLivingBeing();
        human.born();
        human.grow();
        human.reproduce();
        human.die();
        ((SkyBeing)human).fly(); // Accessing sky being feature

        LivingBeing animal = new BeingsOfTheEarth.Animal();
        animal.born();
        animal.grow();
        animal.reproduce();
        animal.die();
        // ((SkyBeing) animal).fly(); // This would result in a compilation error

        LivingBeing bird = new SkyBeings.Bird();
        bird.born();
        bird.grow();
        bird.reproduce();
        bird.die();
        ((SkyBeing)bird).fly(); // Accessing sky being feature
    }
}
