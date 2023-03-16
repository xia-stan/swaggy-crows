/* SPDX-License-Identifier: Apache-2.0 */

/*
 * Copyright 2023 XIA LLC, All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/** @file swaggy_crows.cpp
 * @brief The main file for a REST API implemented w/ Swagger UI.
 */
#include <blueprints.hpp>

int main(int argc, char** argv) {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([]() { return "Welcome to a Crow implementation w/ Swagger UI"; });

    crow::Blueprint swag("swagger", "docs/swagger/static", "docs/swagger/templates");
    swagger_blueprint(swag);
    app.register_blueprint(swag);

    app.port(18080).multithreaded().run();
}