// DOM -> Document Object Model
//        Hierarquia de objectos JS que reflecte a estrutura da 
//        página HTML.

window.addEventListener('load', main);

function main() {
    const computeTotalBtn = document.getElementById('computeTotal');
    computeTotalBtn.addEventListener('click', getTotal);
}

function getTotal() {
    const partySize = parseInt(document.getElementById('partySize').value);
    const singlePrice = parseFloat(document.getElementById('singlePrice').value);
    const vatRate = parseFloat(document.getElementById('vatRate').value);
    const tipRate = parseFloat(document.getElementById('tipRate').value);

    const total = partySize * singlePrice;
    const finalTotal = total * (1 + vatRate/100) * (1 + tipRate/100) ;

    const totalPanel = document.getElementById('totalPanel');
    totalPanel.innerHTML = `
Total : ${total.toFixed(2)} € <br>
Total c/ IVA e gorjeta : ${finalTotal.toFixed(2)} €`;
}