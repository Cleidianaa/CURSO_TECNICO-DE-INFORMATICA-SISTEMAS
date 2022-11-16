
let form = document.getElementById('form');
let nome = document.getElementById('nome');
let apelido = document.getElementById('apelido');
let email = document.getElementById('email');
let date = document.getElementById('date');

form.addEventListener('submit', e => {
    e.preventDefault();

    validarInputs();

});

let setError = (element, message)=>{
    let inputControl = element.parentElement;
    let errorDisplay = inputControl.querySelector('.error');

    errorDisplay.innerText = message;
    inputControl.classList.add('error');
    inputControl.classList.remove('success')
}

let setSuccess = element =>{
    let inputControl = element.parentElement;
    let errorDisplay = inputControl.querySelector('.error');

    errorDisplay.innerHTML = '';
    inputControl.classList.add('success');
    inputControl.classList.remove('error')
}

function validarInputs() {
    let nomevalue = nome.value.trim();
    let apelidovalue = apelido.value.trim();
    let emailvalue = email.value.trim();
    let datevalue = date.value.trim();
    
    if(nomevalue === "" || nome.length <2){
        setError(nome, 'name is required');
        alert('Preencha o campo Nome'); // alfabético com pelo menos duas letras
        form.nome.focus();
        
    } else {
        setSuccess(nome);
    }
    if(apelidovalue == "" || apelido.length <2){
        alert('Preencha o campo Apelido'); //alfabético com pelo menos duas letras
        form.apelido.focus();
        return false;
    }

    if(datevalue ==="" ){
        alert('Preencha a Data'); //DD/MM/AAAA
        form.date.focus();
        return false;
    }

    if(emailvalue === "" ){
        alert('Preencha o campo E-mail.'); //alfnumérico@alfanumérico.alfabético
        form.email.focus();
        return false;
    } 
    else if (!isEmail(email)) {
        alert('Email inválido!');
        form.email.focus();
        return false;
    } else {
        setSuccess(email);
        form.email.value();
    } 
};		

function isEmail(email) {				
    return /^(?:[a-z0-9!#$%&'+/=?^_`{|}~-]+(?:\.[a-z0-9!#$%&'+/=?^_`{|}~-]+)|"(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21\x23-\x5b\x5d-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])")@(?:(?:[a-z0-9](?:[a-z0-9-][a-z0-9])?\.)+[a-z0-9](?:[a-z0-9-][a-z0-9])?|\[(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?|[a-z0-9-]*[a-z0-9]:(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21-\x5a\x53-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])+)\])/.test(email)
}
    

    


  


/*
function validarTudo () {

    let txNome = formulario.txNome.value;
    let txApelido = formulario.txApelido.value;
    let txEmail = formulario.txEmail.value;
    let txData = formulario.txData.value;

    if(txNome == "" || txNome.lenght < 2 ) {
        alert('Informe o nome!')
        formulario.txNome.focus();
        return false;
    }

    if(txApelido == "" || txApelido.lenght < 2 ) {
        alert('Informe o apelido!');
        formulario.txApelido.focus();
        return false;
    }

    if(txEmail == "" || txEmail.indexOF('@') == -1 ) {
        alert('Informe o E-mail!');
        formulario.txEmail.focus();
        return false;
    }

    if(txData == "" || txData.indexOF(dd/mm/aaaa)) {
        alert('Informe a Data!');
        formulario.txData.focus();
        return false;
    }

}
*/