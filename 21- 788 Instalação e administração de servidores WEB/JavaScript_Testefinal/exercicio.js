function ValidarFrom(){
    
  let name = document.querySelector("#nome");
  let apelido = document.querySelector("#apelido");
  let email = document.querySelector("#email");
  let data = document.querySelector("#date");

  //nome
  if(name.value.length < 3 || name.value.length === ''){
      alert('Digite seu nome por favor !');
  }else {
    alert(`Seja  Bem Vindo: ${name.value}`);
  };
  
  //apelido
  if(apelido.value.length < 3 || apelido.value.length === ''){
      alert('Digite seu nome por favor apelido!')
  }else{
      alert( ` Seja  Bem Vindo:  ${name.value} ${apelido.value}`)
  };

  //email 

  if(email.value.length < 3 || email.value.length === '' || email.value.indexOf('@')==-1 || email.value.indexOf('.')==-1 ){
      alert('Informe um E-mail válido!')
  }else{
      alert(`Seu E-mail é: ${email.value}`);
      document.getElementById('email').style.color = "#1785dd";
  };

  // data

  if(data.value.length < 1 || data.value.length === ''){
      alert('Informe a data válida!');
  }else if(data.value.indexOf('/')== 2){
      alert('Por favor informe a data no modelo DD-MM-AAAA')
  }else{
      alert(`Sua data é: ${data.value}`);
  }
  

};
// limpar campos
function reset() {
  var nome = document.getElementById("nome");
  nome.value = "";

  var apelido = document.getElementById("apelido");
  apelido.value = "";

  var email = document.getElementById("email");
  email.value = "";

  var date = document.getElementById("date");
  date.value = "";

  var Sucesso = document.getElementById("Sucesso");
  Sucesso.style.display = 'none';

}