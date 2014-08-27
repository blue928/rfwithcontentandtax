<?php
/**
 * @file
 * rfwithcontentandtax.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function rfwithcontentandtax_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => '2010 Dietary Guidelines',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '04d986be-e412-4494-aa3c-08a952a9b55b',
    'vocabulary_machine_name' => 'resource_finder_guidelines',
  );
  $terms[] = array(
    'name' => 'Dietary Guidelines',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '089f49f3-915d-412e-86d0-2073bfb81933',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Food Guide Pyramid',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '094922cb-c35f-4e1f-bb7e-f5d5894c9292',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'run',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0a064063-427e-413b-b12e-4a7abdd31914',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Presentation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 12,
    'uuid' => '0be7127f-ddc7-4f64-b9fe-33c286b06abe',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'exercise',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0cb5b4d5-5cbb-42a2-a231-a21389755fbe',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'funding',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0dc61441-8bba-49d7-9e20-53181d5b1de0',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Website',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 15,
    'uuid' => '0ed067bc-d453-4f54-a1f8-f735999191f3',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'Book',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '0fd23695-4bf1-4780-a761-51faa47310d8',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'A validated evaluation tool was used to create this resource.',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '101cba95-41be-436b-bc97-9bc9eec9d3cd',
    'vocabulary_machine_name' => 'resource_finder_evaluation_activities',
  );
  $terms[] = array(
    'name' => 'Dietary Fat',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '10dbe9bb-ced0-4b14-a202-28d6fc91d2e4',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'menu',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '12a4a4cb-9e24-4bb7-9733-9e4311484b5f',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'teens',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1b8a405e-4e51-4e98-9233-e02e0c689e6d',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Spanish',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1e080687-5e83-419f-bd5e-de0504d7feff',
    'vocabulary_machine_name' => 'available_languages',
  );
  $terms[] = array(
    'name' => 'Native Americans / American Eskimo',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '21bc12c1-46af-425a-a256-37b769e230b3',
    'vocabulary_machine_name' => 'resource_finder_target_audience',
  );
  $terms[] = array(
    'name' => 'Meal Planning',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '23d1f5ed-0191-4047-960c-fb53cf27038f',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'memorandum',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '26bd4384-abdb-465a-a11f-cc3a3e620d7c',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 12,
    'uuid' => '26e72d01-fe41-49bf-b386-5650ea3b7c8a',
    'vocabulary_machine_name' => 'resource_finder_target_audience',
  );
  $terms[] = array(
    'name' => 'fry',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '27e6c91f-3985-44b2-ae4c-8a72e1cff853',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Other evaluation activities',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '297c6ca6-7ebb-4b8d-8239-e157b8c7d8e9',
    'vocabulary_machine_name' => 'resource_finder_evaluation_activities',
  );
  $terms[] = array(
    'name' => 'Adult',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '31396428-90f4-4286-ad56-0866460202ec',
    'vocabulary_machine_name' => 'resource_finder_target_audience',
  );
  $terms[] = array(
    'name' => 'Icebreaker / Opener',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => '382bdfce-2d29-4a56-89a9-dfc0bda77ff4',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'test tags4',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3cad3044-3ed2-45de-8d77-da7332cfef18',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'parents',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '44317533-3fb1-4a5f-91a4-8b957e554b5c',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Free Materials',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4750631c-1a96-40d3-90a5-45427305f762',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Handbook / Manual',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => '4844f1ec-4cb3-47f9-924c-ce6373e2e927',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'Elementary Children',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '4c655a82-16d4-444c-a531-e26d5a7694ca',
    'vocabulary_machine_name' => 'resource_finder_target_audience',
  );
  $terms[] = array(
    'name' => 'The material contains participant surveys / questionnaires.',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4c8ff78d-21ea-47aa-8d59-8c2e4aeffa4f',
    'vocabulary_machine_name' => 'resource_finder_evaluation_activities',
  );
  $terms[] = array(
    'name' => 'Social Marketing Materials',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 13,
    'uuid' => '4cec96ce-3f82-4b06-914d-5d8c5f7cd6ff',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'Poster',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 11,
    'uuid' => '4da7185b-878c-4251-809b-3282a399506f',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'None',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '513f14e2-7fc8-474a-9f94-c1bdcb2eb007',
    'vocabulary_machine_name' => 'resource_finder_guidelines',
  );
  $terms[] = array(
    'name' => 'Recipes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '52c595b4-81de-4477-94d8-f118d0b0bd53',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => '2005 Dietary Guidelines',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5523b368-4024-490d-8d47-ae92f4479d42',
    'vocabulary_machine_name' => 'resource_finder_guidelines',
  );
  $terms[] = array(
    'name' => 'Curriculum / Lessons',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '56211d64-1f55-4448-b0b1-3c4d661b31c2',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'Middle School',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '5b2f2431-f641-4fba-9697-808ed47a3ca3',
    'vocabulary_machine_name' => 'resource_finder_target_audience',
  );
  $terms[] = array(
    'name' => 'jump',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5b4d7c54-7f06-495c-b057-2c0d17f814f7',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Process evaluation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5eab78b6-d740-4146-bf3c-1f1dcf203ab6',
    'vocabulary_machine_name' => 'resource_finder_evaluation_activities',
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => 'Other Format
',
    'format' => 'filtered_html',
    'weight' => 16,
    'uuid' => '5fc9fd15-2971-4f74-92fe-76267a484e2a',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'tag two',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6334e3df-520a-49fc-b714-0e983fd477d1',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'The materials were studied and results were published in a peer-reviews journal.',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '63db5274-fc74-4c83-ae0d-d4cd148f21de',
    'vocabulary_machine_name' => 'resource_finder_evaluation_activities',
  );
  $terms[] = array(
    'name' => 'Older Adults',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => '6a44c85e-baf1-47e4-a112-14db0369146a',
    'vocabulary_machine_name' => 'resource_finder_target_audience',
  );
  $terms[] = array(
    'name' => 'Pregnant / Breastfeeding Women',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => '70e19599-a5a5-4fa4-bcbd-9e64070cf3a1',
    'vocabulary_machine_name' => 'resource_finder_target_audience',
  );
  $terms[] = array(
    'name' => 'Video',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 14,
    'uuid' => '72ca53b6-a810-4abf-a5a7-0a60598d90c6',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'MyPyramid',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '73777c16-d021-44d0-b2c6-7a1708414799',
    'vocabulary_machine_name' => 'resource_finder_guidelines',
  );
  $terms[] = array(
    'name' => 'teenagers',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '790035f2-4f2e-48fc-aa8a-fe19b98f8865',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Korean',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7c59693e-6171-464a-bb7a-0ffadc923f71',
    'vocabulary_machine_name' => 'available_languages',
  );
  $terms[] = array(
    'name' => 'tag 3',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8510f006-98ec-4530-9aa9-802e3b7d9967',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Kit',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => '85eada27-fb67-44df-9f41-8eed9aa3c4b5',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'Teens',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 11,
    'uuid' => '86cb6ddb-1516-4d78-bca8-c4811e2ae648',
    'vocabulary_machine_name' => 'resource_finder_target_audience',
  );
  $terms[] = array(
    'name' => 'Bulletin Board',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '88dc7253-4b2a-4e10-a65e-893adb040f62',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'Cookbook  / Recipes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '8a255eb9-8521-4503-a3ff-5c62e7ce0eaf',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'Weight Control',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8b292a18-3c29-4dbd-bbd4-82e01ca37cb3',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'shopping',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8e3b59b5-76e8-4efe-97c2-32762bfb1f23',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Russian',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9395e95b-a0e4-4851-bf28-13f710d0965e',
    'vocabulary_machine_name' => 'available_languages',
  );
  $terms[] = array(
    'name' => 'Physical Activity',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '949f116e-0135-47f3-ab5e-4f7ca4a7173b',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'African Americans',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '9745d386-e709-4bfe-8d3b-4a23da5ccf08',
    'vocabulary_machine_name' => 'resource_finder_target_audience',
  );
  $terms[] = array(
    'name' => 'vegetarian',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '99ebf76d-43bf-47cd-bb1d-079a2e90058d',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'activity',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9a491a32-4c36-4c06-8510-cbd6363f0bfb',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'guy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9a4a71c5-afda-4b94-b653-1582fd3daebc',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Hmong',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a0eb7e5c-48ea-4fd7-aa5c-8db42348aa69',
    'vocabulary_machine_name' => 'available_languages',
  );
  $terms[] = array(
    'name' => 'Native American',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a31d39c9-ec6f-4a91-a201-d9288749454e',
    'vocabulary_machine_name' => 'available_languages',
  );
  $terms[] = array(
    'name' => 'hop',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ae1612cb-5e23-4ad3-814f-aff60532cf95',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Creole',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b0ce81c5-0380-430d-ac89-fb2bf96a0339',
    'vocabulary_machine_name' => 'available_languages',
  );
  $terms[] = array(
    'name' => 'physical activity',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b173b171-55f5-49da-8ae1-48aa1a85f0e8',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Vietnamese',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b797dca5-5b78-4b43-b609-fd0135c8bef4',
    'vocabulary_machine_name' => 'available_languages',
  );
  $terms[] = array(
    'name' => 'Fact Sheets',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => 'b99ce5f7-7226-4212-8b08-57cb1125a2bc',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'save',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'befd72ae-207f-4e38-9547-f2dfd02e322e',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'try',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bf9db026-c42e-4058-85a5-7691b55da291',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'money',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c10f7fbd-2145-4ff7-a7e6-ad2d49892f79',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Food Guide Pyramid',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c49f7777-f394-4c08-8fce-e00e58d3c492',
    'vocabulary_machine_name' => 'resource_finder_guidelines',
  );
  $terms[] = array(
    'name' => 'budget',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c4dec850-27aa-4aa0-99a4-8dbb0aca077e',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'French',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c862102e-c8af-47b8-8ac7-4f06a0312bf5',
    'vocabulary_machine_name' => 'available_languages',
  );
  $terms[] = array(
    'name' => 'Asian American / Pacific Islander',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'cb0a199b-3ada-4873-88f5-c4464102356f',
    'vocabulary_machine_name' => 'resource_finder_target_audience',
  );
  $terms[] = array(
    'name' => 'Impact Evaluation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd0105004-90a0-476c-a633-c41af64e6443',
    'vocabulary_machine_name' => 'resource_finder_evaluation_activities',
  );
  $terms[] = array(
    'name' => 'Game',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => 'd64d7c97-f212-4317-9895-44139c2e98e7',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'MyPlate',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd910f4e5-36e7-4b46-81fd-3329a08f9d71',
    'vocabulary_machine_name' => 'resource_finder_guidelines',
  );
  $terms[] = array(
    'name' => 'policy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd980e7b8-407a-406a-a9f5-6206861f4988',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Food Preparation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'da282639-5d8e-43fc-a01f-1cdc16b98bdd',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'memo',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'de7da6f9-954b-435f-8210-2040915e6bc4',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Preschool Children',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 10,
    'uuid' => 'e1c6c0e1-38ad-46ae-9a00-aa4adf773b69',
    'vocabulary_machine_name' => 'resource_finder_target_audience',
  );
  $terms[] = array(
    'name' => 'Hispanic / Latino Americans',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'e3242451-3ec3-41d4-9265-68e31082727d',
    'vocabulary_machine_name' => 'resource_finder_target_audience',
  );
  $terms[] = array(
    'name' => 'tag1',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e482410d-b15c-4167-8882-2c49e9c87e7f',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Activity',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e8065371-7518-4020-aabe-2592896bbebd',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'Food Purchasing',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e9266e35-f4b6-4165-ba10-fab83bbef4bd',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Pilot Study',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e9648c45-9fdf-4321-89b7-d2929d0ce809',
    'vocabulary_machine_name' => 'resource_finder_evaluation_activities',
  );
  $terms[] = array(
    'name' => 'Lao or Laoation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e9e7d01e-7dca-4724-a130-3193643cb4e3',
    'vocabulary_machine_name' => 'available_languages',
  );
  $terms[] = array(
    'name' => 'Nutrition Labeling',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ef0f21b0-b219-448d-8f06-bc6a8178e96e',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Cambodian',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ef94dec9-427a-410c-b1df-a59f22342661',
    'vocabulary_machine_name' => 'available_languages',
  );
  $terms[] = array(
    'name' => 'Chinese',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f05a164f-7bd6-43f4-8dfd-95146e94a3e8',
    'vocabulary_machine_name' => 'available_languages',
  );
  $terms[] = array(
    'name' => 'None',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f4238cfa-e2fa-44a7-88ea-7bf113606c24',
    'vocabulary_machine_name' => 'resource_finder_evaluation_activities',
  );
  $terms[] = array(
    'name' => 'Newsletter',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 10,
    'uuid' => 'f6f30173-94ee-42f7-8103-70a77cd6bcda',
    'vocabulary_machine_name' => 'resource_finder_format',
  );
  $terms[] = array(
    'name' => 'This material uses an evaluation framework.',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'fbe6901f-bd2c-4c36-9ac8-69c6e49cec33',
    'vocabulary_machine_name' => 'resource_finder_evaluation_activities',
  );
  $terms[] = array(
    'name' => 'Parents',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => 'fe57b46f-e520-45ae-9a2e-566456675871',
    'vocabulary_machine_name' => 'resource_finder_target_audience',
  );
  $terms[] = array(
    'name' => 'English',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ff529d42-4795-43ef-a491-e379af773846',
    'vocabulary_machine_name' => 'available_languages',
  );
  return $terms;
}
