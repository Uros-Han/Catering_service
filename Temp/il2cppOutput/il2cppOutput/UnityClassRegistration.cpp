template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityWebRequestWWW();
	RegisterModule_UnityWebRequestWWW();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequestAudio();
	RegisterModule_UnityWebRequestAudio();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>();
class CapsuleCollider2D; 
class CircleCollider2D; template <> void RegisterClass<CircleCollider2D>();
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; template <> void RegisterClass<PolygonCollider2D>();
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>();
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; template <> void RegisterClass<WindZone>();
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; template <> void RegisterClass<LineRenderer>();
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteMask; 
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TilemapRenderer; 
class TrailRenderer; template <> void RegisterClass<TrailRenderer>();
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; template <> void RegisterClass<Flare>();
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; 
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterClass<PhysicMaterial>();
class PhysicsMaterial2D; template <> void RegisterClass<PhysicsMaterial2D>();
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; template <> void RegisterClass<CGProgram>();
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>();
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; template <> void RegisterClass<PerformanceReportingManager>();
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>();
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>();
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 97 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. RenderSettings
	RegisterClass<RenderSettings>();
	//6. LevelGameManager
	RegisterClass<LevelGameManager>();
	//7. GameManager
	RegisterClass<GameManager>();
	//8. QualitySettings
	RegisterClass<QualitySettings>();
	//9. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//10. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//11. Renderer
	RegisterClass<Renderer>();
	//12. TrailRenderer
	RegisterClass<TrailRenderer>();
	//13. LineRenderer
	RegisterClass<LineRenderer>();
	//14. GUIElement
	RegisterClass<GUIElement>();
	//15. GUILayer
	RegisterClass<GUILayer>();
	//16. Light
	RegisterClass<Light>();
	//17. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//18. Shader
	RegisterClass<Shader>();
	//19. NamedObject
	RegisterClass<NamedObject>();
	//20. Material
	RegisterClass<Material>();
	//21. Sprite
	RegisterClass<Sprite>();
	//22. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//23. TextAsset
	RegisterClass<TextAsset>();
	//24. Texture
	RegisterClass<Texture>();
	//25. Texture2D
	RegisterClass<Texture2D>();
	//26. Texture3D
	RegisterClass<Texture3D>();
	//27. RenderTexture
	RegisterClass<RenderTexture>();
	//28. Transform
	RegisterClass<Transform>();
	//29. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//30. Flare
	RegisterClass<Flare>();
	//31. MeshFilter
	RegisterClass<MeshFilter>();
	//32. MeshRenderer
	RegisterClass<MeshRenderer>();
	//33. Mesh
	RegisterClass<Mesh>();
	//34. AudioClip
	RegisterClass<AudioClip>();
	//35. SampleClip
	RegisterClass<SampleClip>();
	//36. AudioListener
	RegisterClass<AudioListener>();
	//37. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//38. AudioSource
	RegisterClass<AudioSource>();
	//39. Rigidbody
	RegisterClass<Rigidbody>();
	//40. Collider
	RegisterClass<Collider>();
	//41. BoxCollider
	RegisterClass<BoxCollider>();
	//42. SphereCollider
	RegisterClass<SphereCollider>();
	//43. MeshCollider
	RegisterClass<MeshCollider>();
	//44. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//45. PhysicMaterial
	RegisterClass<PhysicMaterial>();
	//46. CharacterController
	RegisterClass<CharacterController>();
	//47. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//48. Collider2D
	RegisterClass<Collider2D>();
	//49. PolygonCollider2D
	RegisterClass<PolygonCollider2D>();
	//50. BoxCollider2D
	RegisterClass<BoxCollider2D>();
	//51. PhysicsMaterial2D
	RegisterClass<PhysicsMaterial2D>();
	//52. ParticleSystem
	RegisterClass<ParticleSystem>();
	//53. NavMeshAgent
	RegisterClass<NavMeshAgent>();
	//54. AnimationClip
	RegisterClass<AnimationClip>();
	//55. Motion
	RegisterClass<Motion>();
	//56. Animation
	RegisterClass<Animation>();
	//57. Animator
	RegisterClass<Animator>();
	//58. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//59. UI::Canvas
	RegisterClass<UI::Canvas>();
	//60. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//61. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//62. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//63. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//64. WindZone
	RegisterClass<WindZone>();
	//65. CircleCollider2D
	RegisterClass<CircleCollider2D>();
	//66. PreloadData
	RegisterClass<PreloadData>();
	//67. Cubemap
	RegisterClass<Cubemap>();
	//68. Texture2DArray
	RegisterClass<Texture2DArray>();
	//69. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//70. BuildSettings
	RegisterClass<BuildSettings>();
	//71. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//72. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//73. InputManager
	RegisterClass<InputManager>();
	//74. PlayerSettings
	RegisterClass<PlayerSettings>();
	//75. ResourceManager
	RegisterClass<ResourceManager>();
	//76. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//77. ScriptMapper
	RegisterClass<ScriptMapper>();
	//78. TagManager
	RegisterClass<TagManager>();
	//79. TimeManager
	RegisterClass<TimeManager>();
	//80. MonoManager
	RegisterClass<MonoManager>();
	//81. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//82. NetworkManager
	RegisterClass<NetworkManager>();
	//83. MonoScript
	RegisterClass<MonoScript>();
	//84. PhysicsManager
	RegisterClass<PhysicsManager>();
	//85. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>();
	//86. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>();
	//87. PerformanceReportingManager
	RegisterClass<PerformanceReportingManager>();
	//88. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//89. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//90. AudioManager
	RegisterClass<AudioManager>();
	//91. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//92. AnimatorController
	RegisterClass<AnimatorController>();
	//93. FlareLayer
	RegisterClass<FlareLayer>();
	//94. LightmapSettings
	RegisterClass<LightmapSettings>();
	//95. CGProgram
	RegisterClass<CGProgram>();
	//96. NavMeshSettings
	RegisterClass<NavMeshSettings>();

}
