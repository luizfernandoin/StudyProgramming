import logo from './logo.svg';
import './App.css';
import { useState } from 'react';
import UserDetails from './components/UserDetails';

function App() {
  const pessoas = [
    {id: 1, nome: "Luiz", idade:17, profissao: "Programador"}, 
    {id: 2, nome: "Elissandra", idade: 27, profissao: "Engenheira"}, 
    {id: 3, nome: "Vanda", idade: 24, profissao: "Professora"}
  ]

  return (
    <div className="App">
      {pessoas.map((user) => (
        <UserDetails key={user.id} user={user} />
      ))}
    </div>
  );
}

export default App;
