/*
 * Copyright The OpenTelemetry Authors
 * SPDX-License-Identifier: Apache-2.0
 */

/*
 * DO NOT EDIT, this is an Auto-generated file from:
 * buildscripts/semantic-convention/templates/registry/semantic_attributes-h.j2
 */












#pragma once


namespace opentelemetry {
namespace semconv
{
namespace cicd
{

/**
 * The human readable name of the pipeline within a CI/CD system.
 */
static constexpr const char *kCicdPipelineName
 = "cicd.pipeline.name";

/**
 * The result of a pipeline run.
 */
static constexpr const char *kCicdPipelineResult
 = "cicd.pipeline.result";

/**
 * The unique identifier of a pipeline run within a CI/CD system.
 */
static constexpr const char *kCicdPipelineRunId
 = "cicd.pipeline.run.id";

/**
 * The pipeline run goes through these states during its lifecycle.
 */
static constexpr const char *kCicdPipelineRunState
 = "cicd.pipeline.run.state";

/**
 * The <a href="https://wikipedia.org/wiki/URL">URL</a> of the pipeline run, providing the complete address in order to locate and identify the pipeline run.
 */
static constexpr const char *kCicdPipelineRunUrlFull
 = "cicd.pipeline.run.url.full";

/**
 * The human readable name of a task within a pipeline. Task here most closely aligns with a <a href="https://wikipedia.org/wiki/Pipeline_(computing)">computing process</a> in a pipeline. Other terms for tasks include commands, steps, and procedures.
 */
static constexpr const char *kCicdPipelineTaskName
 = "cicd.pipeline.task.name";

/**
 * The unique identifier of a task run within a pipeline.
 */
static constexpr const char *kCicdPipelineTaskRunId
 = "cicd.pipeline.task.run.id";

/**
 * The <a href="https://wikipedia.org/wiki/URL">URL</a> of the pipeline task run, providing the complete address in order to locate and identify the pipeline task run.
 */
static constexpr const char *kCicdPipelineTaskRunUrlFull
 = "cicd.pipeline.task.run.url.full";

/**
 * The type of the task within a pipeline.
 */
static constexpr const char *kCicdPipelineTaskType
 = "cicd.pipeline.task.type";

/**
 * The name of a component of the CICD system.
 */
static constexpr const char *kCicdSystemComponent
 = "cicd.system.component";

/**
 * The state of a CICD worker / agent.
 */
static constexpr const char *kCicdWorkerState
 = "cicd.worker.state";


namespace CicdPipelineResultValues
{
/**
 * The pipeline run finished successfully.
 */
static constexpr const char *
 kSuccess
 = "success";

/**
 * The pipeline run did not finish successfully, eg. due to a compile error or a failing test. Such failures are usually detected by non-zero exit codes of the tools executed in the pipeline run.
 */
static constexpr const char *
 kFailure
 = "failure";

/**
 * The pipeline run failed due to an error in the CICD system, eg. due to the worker being killed.
 */
static constexpr const char *
 kError
 = "error";

/**
 * A timeout caused the pipeline run to be interrupted.
 */
static constexpr const char *
 kTimeout
 = "timeout";

/**
 * The pipeline run was cancelled, eg. by a user manually cancelling the pipeline run.
 */
static constexpr const char *
 kCancellation
 = "cancellation";

/**
 * The pipeline run was skipped, eg. due to a precondition not being met.
 */
static constexpr const char *
 kSkip
 = "skip";

}

namespace CicdPipelineRunStateValues
{
/**
 * The run pending state spans from the event triggering the pipeline run until the execution of the run starts (eg. time spent in a queue, provisioning agents, creating run resources).
 */
static constexpr const char *
 kPending
 = "pending";

/**
 * The executing state spans the execution of any run tasks (eg. build, test).
 */
static constexpr const char *
 kExecuting
 = "executing";

/**
 * The finalizing state spans from when the run has finished executing (eg. cleanup of run resources).
 */
static constexpr const char *
 kFinalizing
 = "finalizing";

}

namespace CicdPipelineTaskTypeValues
{
/**
 * build
 */
static constexpr const char *
 kBuild
 = "build";

/**
 * test
 */
static constexpr const char *
 kTest
 = "test";

/**
 * deploy
 */
static constexpr const char *
 kDeploy
 = "deploy";

}

namespace CicdWorkerStateValues
{
/**
 * The worker is not performing work for the CICD system. It is available to the CICD system to perform work on (online / idle).
 */
static constexpr const char *
 kAvailable
 = "available";

/**
 * The worker is performing work for the CICD system.
 */
static constexpr const char *
 kBusy
 = "busy";

/**
 * The worker is not available to the CICD system (disconnected / down).
 */
static constexpr const char *
 kOffline
 = "offline";

}


}
}
}
