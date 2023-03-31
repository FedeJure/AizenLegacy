namespace Models
{
    public class UserSessionState
    {
        public UserWallet wallet;

        public UserSessionState(UserWallet wallet)
        {
            this.wallet = wallet;
        }
    }
}