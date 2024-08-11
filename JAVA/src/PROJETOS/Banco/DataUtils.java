package PROJETOS.Banco;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Optional;

public class DataUtils {
    public Optional<Date> verificarTextoData(String data) {
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        sdf.setLenient(false);

        try {
            Date dataNascimento = sdf.parse(data);
            return Optional.of(dataNascimento);
        } catch (ParseException e) {
            return Optional.empty();
        }
    }
}
