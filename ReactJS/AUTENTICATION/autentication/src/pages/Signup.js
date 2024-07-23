import { useState } from "react";
import { db } from "../firebase/config";
import { getAuth, createUserWithEmailAndPassword, updateProfile } from 'firebase/auth';

const Signup = () => {
    const [name, setName] = useState("");
    const [email, setEmail] = useState("");
    const [password, setPassword] = useState("");
    const [confirmPassword, setConfirmPassword] = useState("");
    const auth = getAuth();

    const createUser = async (data) => {
        try {
            const { user } = await createUserWithEmailAndPassword(
                auth,
                data.email,
                data.password
            )

            await updateProfile(user, {
                displayName:data.displayName
            })
        } catch (error) {
            console.log(error.message);
        }
    }


    const handleSubmit = (e) => {
        e.preventDefault();

        const user = {
            name,
            email,
            password,
        }

        if (password !== confirmPassword) {
            return;
        }
        
        const res = createUser(user);

        console.log(res);
    }

    return (
        <div>
            <h1>Cadastre-se para postar!</h1>
            <p>Crie seu usuário e compartilhe suas histórias</p>
            <form onSubmit={handleSubmit}>
            <label>
                <span>Name: </span>
                <input 
                type="text" 
                name="displayName" 
                required 
                placeholder='Nome do Usuário' 
                value={name}
                onChange={(e) => setName(e.target.value)}
                />
            </label>
            <label>
                <span>E-mail: </span>
                <input 
                type="email" 
                name="email" 
                required 
                placeholder='E-mail do Usuário' 
                value={email}
                onChange={(e) => setEmail(e.target.value)}
                />
            </label>
            <label>
                <span>Senha: </span>
                <input 
                type="password" 
                name="password" 
                required 
                placeholder='Insira sua Senha'
                value={password}
                onChange={(e) => setPassword(e.target.value)}
                />
            </label>
            <label>
                <span>Confirmação de Senha: </span>
                <input 
                type="password" 
                name="password" 
                required 
                placeholder='Confirme sua Senha' 
                value={confirmPassword}
                onChange={(e) => setConfirmPassword(e.target.value)}
                />
            </label>
            <button className='btn'>Cadastrar</button>

            </form>
        </div>
    )
}

export default Signup