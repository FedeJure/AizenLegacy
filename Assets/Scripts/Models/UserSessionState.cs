namespace Models
{
    public class UserSessionState
    {
        public PlayerWallet wallet;

        public UserSessionState(PlayerWallet wallet)
        {
            this.wallet = wallet;
        }
    }
}