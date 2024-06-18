import logo from './logo.svg';
import './App.css';
import MyForm from './components/MyForm';

function App() {
  return (
    <div className="App">
      <h2>Forms</h2>
      <MyForm user={{ name: "Luiz Fernando", email: "teste@gmail.com ", bio: "teste" }}/>
    </div>
  );
}

export default App;
