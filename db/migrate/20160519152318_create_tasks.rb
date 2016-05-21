class CreateTasks < ActiveRecord::Migration
  def change
    create_table :tasks do |t|
      t.string :name, null: false
      t.string :file, null: false
      t.integer :number_of_questions
      t.timestamps null: false
    end
  end
end
