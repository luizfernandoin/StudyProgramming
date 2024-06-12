
const UserDetails = ({ user }) => {
  return (
    <div>
        <p>{user.nome} - {user.idade} - {user.profissao}</p>
        {user.idade >= 18 ? <p>pode tirar carteira!</p> : <p>não pode tirar carteira!</p>}
    </div>
  )
}

export default UserDetails