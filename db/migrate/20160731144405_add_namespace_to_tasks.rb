class AddNamespaceToTasks < ActiveRecord::Migration
  def change
    add_column :tasks, :namespace, :string
  end
end
