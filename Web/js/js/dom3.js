const p = document.querySelector('p')
console.log(p.innerText)

p.innerText = 'ninjas are awesome'
p.innerText += ' and gay'

const paras = document.querySelectorAll('p')

paras.forEach((para) => {
  console.log(para.innerText)
  para.innerText += ' new text'
})

const di = document.querySelector('.content')
console.log(di.innerText) // wont give the tags inside it
console.log(di.innerHTML)

di.innerHTML = '<h2> This is a new H2 tag </h2>'

const people = ['mario', 'luigi', 'yoshi']

people.forEach((person) => {
  di.innerHTML += `<p> ${person}</p>`
})
