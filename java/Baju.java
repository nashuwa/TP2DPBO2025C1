public class Baju extends Aksesoris {
    private String untuk;
    private String size;
    private String merk;

    // Konstruktor default
    public Baju() {
        this.untuk = "";
        this.size = "";
        this.merk = "";
    }

    // Getter dan Setter
    public String getUntuk() {
        return untuk;
    }

    public void setUntuk(String untuk) {
        this.untuk = untuk;
    }

    public String getSize() {
        return size;
    }

    public void setSize(String size) {
        this.size = size;
    }

    public String getMerk() {
        return merk;
    }

    public void setMerk(String merk) {
        this.merk = merk;
    }
}
