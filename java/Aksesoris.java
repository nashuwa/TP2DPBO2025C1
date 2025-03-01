public class Aksesoris extends Petshop {
    private String jenis;
    private String bahan;
    private String warna;

    // Konstruktor default
    public Aksesoris() {
        this.jenis = "";
        this.bahan = "";
        this.warna = "";
    }

    // Getter dan Setter
    public String getJenis() {
        return jenis;
    }

    public void setJenis(String jenis) {
        this.jenis = jenis;
    }

    public String getBahan() {
        return bahan;
    }

    public void setBahan(String bahan) {
        this.bahan = bahan;
    }

    public String getWarna() {
        return warna;
    }

    public void setWarna(String warna) {
        this.warna = warna;
    }
}
