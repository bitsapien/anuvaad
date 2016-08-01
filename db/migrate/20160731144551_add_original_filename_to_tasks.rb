class AddOriginalFilenameToTasks < ActiveRecord::Migration
  def change
    add_column :tasks, :original_filename, :string
  end
end
