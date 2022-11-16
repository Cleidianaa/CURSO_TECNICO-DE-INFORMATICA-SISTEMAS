
function validaNome(){

    let nome = document.getElementById('TxtNome').value;

    if(nome.length > 2 ) {
        alert(`Bem vindo ${nome}!`)
        return true;
    }else{
        alert('Informe o Nome Correto!')
        return false;
    };

}

function validaApelido(){

    let apelido = document.getElementById('TxtApelido').value;

    if(apelido.length > 2) {
        alert(`Seu apelido é ${apelido}!`)
        return true;
    }else{
        alert('Informe o Apelido correto!')
        return false;
    };
}

/*
function validaEmail(){
    
    let email = document.getElementById('TxtEmail').value;

    if(email.length != ''){
        alert('Informe o E-mail!')
        return true;
    }else{
        alert('Informe o E-mail correto!')
        return false;
    };
}
*/





function validaData(){
    let data = document.getElementById('TxtData').value;
    

    if(data.length == data){
        alert(`Hoje é dia ${data}`)
        return true;
    }else{
        alert ('Informe a Data correta!')
        return false;
    };
}







function validaTudo(){

    if(validaNome() && validaApelido() && validaData()){
        return true;
    }else{
        alert('ERRO AO ENVIAR!')
        return false;
    };


    
}
