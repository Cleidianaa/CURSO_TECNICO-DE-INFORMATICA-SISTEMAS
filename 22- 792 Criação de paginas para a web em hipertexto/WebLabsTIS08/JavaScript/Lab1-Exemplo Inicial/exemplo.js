
function somaAte (limite) { 
    let soma = 0; 
    for (let x = 1; x <= limite; x++) { 
        soma+=x;
    }
    return soma;
} 

function mostra (elemID, texto) {
    let item = document.getElementById(elemID);
    if (item) {
        if (texto !== undefined) {
            item.innerHTML = texto;
        }
        item.style.visibility="visible";
        item.style.display="block";
    }
}

function esconde (elemID) {
    let item = document.getElementById(elemID);
    if (item) {
        item.style.visibility="hidden";
        item.style.display="none";
    }
}

function activa (elemID) {
    let item = document.getElementById(elemID);
    if (item) {
        item.disabled = false;
    }
}

function desactiva (elemID) {
    let item = document.getElementById(elemID);
    if (item) {
        item.disabled = true;
    }
} 

function verificaResultado () {
    let nome = document.getElementById("nome");
    let numero = document.getElementById("numero");
    if (numero) {
        let texto;
        if (numero.value == 19) {
            texto = "Parabéns, " + (nome.value ? nome.value : " caro anónimo");
                texto += "! Acertou";
        }
        else {
            texto = "Falhou! Tente novamente...";
        }
        mostra("resultado", texto);
        desactiva("adivinhar");
    }
}

function voltaATentar () {
    let numero = document.getElementById("numero");
    if (numero){
        numero.value = "";
    }
    activa("adivinhar");
    esconde("resultado");
  
} 
       