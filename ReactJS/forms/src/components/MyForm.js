import { useState } from 'react';
import './MyForm.css';

const MyForm = ({ user }) => {
    const [name, setName] = useState(user ? user.name : "");
    const [email, setEmail] = useState(user ? user.email : "");
    const [bio, setBio] = useState(user ? user.bio : "");
    const [role, setRole] = useState();

    const handleName = (e) => {
        console.log(e.target.value);
    }
    

    const handleSubmit = (event) => {
        event.preventDefault();
        
        console.log(name, email, bio, role);

        setBio("");
        setEmail("");
        setName("");
    };

    return (
        <div>
            <form onSubmit={handleSubmit}>
                <label htmlFor="name">Nome:</label>
                <input type="text" name="name" placeholder="Digite o seu nome" onChange={(e) => {setName(e.target.value)}} value={name}/>

                {/* label envolvendo input */}
                <label>
                    <span>Email</span>
                    <input type="email" name="email" placeholder='Digite o seu email' onChange={(e) => {setEmail(e.target.value)}} value={email}/>
                </label>

                <label>
                    <span>Bio</span>
                    <textarea 
                        name="bio"
                        placeholder='Descrição do Usuário'
                        onChange={(e) => {setBio(e.target.value)}}
                        value={bio}></textarea>
                </label>

                {/* select */}
                <label>
                    <span>Função do Sistema</span>
                    <select name="role" onChange={(e) => {setRole(e.target.value)}}>
                        <option value="user">Usuario</option>
                        <option value="editor">Editor</option>
                        <option value="adm">Administrador</option>
                    </select>
                </label>

                <input type="submit" value="Enviar"/>
            </form>
        </div>
    )
}

export default MyForm;