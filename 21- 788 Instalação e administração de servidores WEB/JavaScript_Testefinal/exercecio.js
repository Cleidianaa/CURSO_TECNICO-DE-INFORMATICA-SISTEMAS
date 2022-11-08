

let sendBtn = document.getElementById('send');
let resetBtn = document.getElementById('reset');
let form = document.getElementById('contact');


// Atualizar o form
form.addEventListener('submit', (e) =>{
    e.preventDefault();
});

// Limpar  e redefinir o button

resetBtn.addEventListener('click', (e) =>{

    let name = document.getElementById('name');
    let apelido = document.getElementById('apelido');
    let email = document.getElementById('email');
    let date = document.getElementById('date');

    //Definer  valor
    name.value ='';
    apelido.value = '';
    email.value = '';
    date.value = '';

});

// Definir o Btn enviar

sendBtn.addEventListener('click', (e) => {

    let name = document.getElementById('name');
    let apelido = document.getElementById('apelido');
    let email = document.getElementById('email');
    let date = document.getElementById('date');

    //Definer  valor
    name = name.value;
    localStorage.setItem('name', name);

    apelido = apelido.value;
    localStorage.setItem('apelido', apelido);

    email = email.value;
    localStorage.setItem('email', email);

    date = date.value;
    localStorage.setItem('date', date);

});