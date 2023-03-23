import {format, differenceInDays, differenceInCalendarDays, addDays} from 'https://esm.run/date-fns';
const dataActual = document.getElementById('data-actual');
dataActual.innerHTML = format(new Date(), "dd 'do' MM 'de' yyyy");

let dateFns = {};
dateFns.format = format;
dateFns.differenceInDays = differenceInDays;
dateFns.differenceInCalendarDays = differenceInCalendarDays;
dateFns.addDays = addDays;

window.dateFns = dateFns;
