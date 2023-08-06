namespace Models
{
    public class UserSessionState
    {
        public PlayerInventory Inventory;

        public UserSessionState(PlayerInventory inventory)
        {
            this.Inventory = inventory;
        }
    }
}