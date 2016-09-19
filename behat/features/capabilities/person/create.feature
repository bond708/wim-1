@person @person-create @stability @api
Feature: Create person
  Benefit: In order to show textual information on the site
  Role: CM
  Goal/desire: Create person

  Scenario: Successfully create person
    Given I am logged in as a "content editor"
    And I am at "node/add/person"
    When I fill in the following:
      | Title | Bruce Wayne         |
      | Tags  | BSCPGTEST, BSCPGTAG |
      | Roles | Batman              |
      | Phone | 03023 302302 3      |
      | Email | batman@test.com     |
    And I fill in wysiwyg on field Body with "Body description text"
    And I fill in wysiwyg on field Address with "Secret place"
    And I attach the file "/fixtures/images/drupal-icon.png" to "Image"
    And I click "Reminder"
    And I should see "Reminder email"
    And I press "Save"
    And I should see the success message "Person Bruce Wayne has been created."
    And I should see "Body description text"
    And I should see "Batman"
    And I should see "Email"
    And I should see "Phone"
    And I should see "Secret place"
    And I should see "Share"

    Given I am an anonymous user
    And I visit "node/add/person"
    Then I should see the heading "No access (403)"